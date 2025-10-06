#!/usr/bin/env python3
"""
Enhanced script for managing the CONTRIBUTORS.md file.

Features:
- Remove trailing whitespaces before '####'
- Replace every heading with '####'
- Sort the list of contributors alphabetically
- Validate contributor entries
- Create backup before modifications
- Better error handling and logging

Usage:
    python3 manage.py [--backup] [--validate-only] [--help]

Options:
    --backup        Create backup before processing
    --validate-only Only validate entries without modifying
    --help         Show this help message

Requirements: Python 3.6+
"""

import re
import sys
import os
import shutil
from datetime import datetime
import argparse


class ContributorManager:
    def __init__(self, filename='CONTRIBUTORS.md'):
        self.filename = filename
        self.backup_filename = f"{filename}.backup.{datetime.now().strftime('%Y%m%d_%H%M%S')}"
        self.errors = []
        self.warnings = []
    
    def log_error(self, message):
        """Log error message."""
        self.errors.append(message)
        print(f"ERROR: {message}", file=sys.stderr)
    
    def log_warning(self, message):
        """Log warning message."""
        self.warnings.append(message)
        print(f"WARNING: {message}", file=sys.stderr)
    
    def log_info(self, message):
        """Log info message."""
        print(f"INFO: {message}")
    
    def create_backup(self):
        """Create backup of the original file."""
        try:
            if os.path.exists(self.filename):
                shutil.copy2(self.filename, self.backup_filename)
                self.log_info(f"Backup created: {self.backup_filename}")
                return True
            else:
                self.log_error(f"Source file {self.filename} not found")
                return False
        except Exception as e:
            self.log_error(f"Failed to create backup: {str(e)}")
            return False
    
    def validate_file_exists(self):
        """Check if the contributors file exists."""
        if not os.path.exists(self.filename):
            self.log_error(f"File {self.filename} does not exist")
            return False
        return True
    
    def format_contributor(self, contrib):
        """
        Helper function to format contributor details properly.
        
        Args:
            contrib (str): Raw contributor text
            
        Returns:
            str: Formatted contributor entry
        """
        if not contrib.strip():
            return ""
        
        # Common fixes
        replacements = {
            '：': ':',
            'htpps': 'https',
            'Name:[': 'Name: [',
            'Name : [': 'Name: [',
            'Name :[': 'Name: [',
            'Name: [ ': 'Name: [',
            'Github:': 'GitHub:',
            'github:': 'GitHub:',
        }
        
        for old, new in replacements.items():
            contrib = contrib.replace(old, new)
        
        # Ensure proper formatting
        contrib = contrib.strip()
        if not contrib.startswith('#### '):
            contrib = '#### ' + contrib
        
        return contrib + '\n\n'
    
    def validate_contributor_entry(self, contrib, line_num=None):
        """
        Validate a contributor entry.
        
        Args:
            contrib (str): Contributor entry to validate
            line_num (int): Line number for error reporting
            
        Returns:
            bool: True if valid, False otherwise
        """
        is_valid = True
        location_info = f" (line {line_num})" if line_num else ""
        
        # Check if entry has a name
        if not re.search(r'Name:\s*\[.*?\]', contrib):
            self.log_warning(f"Missing or malformed name field{location_info}")
            is_valid = False
        
        # Check for GitHub link format
        github_pattern = r'GitHub:\s*\[.*?\]\(https?://github\.com/.*?\)'
        if 'GitHub:' in contrib and not re.search(github_pattern, contrib):
            self.log_warning(f"Malformed GitHub link{location_info}")
        
        # Check for place field
        if '- Place:' not in contrib:
            self.log_warning(f"Missing place field{location_info}")
        
        # Check for bio field
        if '- Bio:' not in contrib:
            self.log_warning(f"Missing bio field{location_info}")
        
        return is_valid
    
    def process_file(self, validate_only=False):
        """
        Process the contributors file.
        
        Args:
            validate_only (bool): If True, only validate without modifying
            
        Returns:
            bool: True if successful, False otherwise
        """
        try:
            # Read the file
            with open(self.filename, 'r', encoding='utf-8') as file:
                content = file.read()
            
            if not content.strip():
                self.log_error("File is empty")
                return False
            
            # First pass: normalize headings and remove trailing whitespaces
            lines = content.split('\n')
            normalized_lines = []
            
            for i, line in enumerate(lines, 1):
                # Normalize headings
                line = re.sub(r'^#{1,3}\s+', '#### ', line)
                
                # Remove leading whitespace from lines starting with ##
                if line.startswith(' ##'):
                    line = line.lstrip()
                
                normalized_lines.append(line)
            
            normalized_content = '\n'.join(normalized_lines)
            
            # Split into contributor sections
            contributors = [
                contributor.strip() 
                for contributor in normalized_content.split('####')
                if contributor.strip()
            ]
            
            self.log_info(f"Found {len(contributors)} contributor entries")
            
            # Validate and format contributors
            valid_contributors = []
            for i, contrib in enumerate(contributors, 1):
                if self.validate_contributor_entry(contrib, i):
                    formatted = self.format_contributor(contrib)
                    if formatted:
                        valid_contributors.append(formatted)
                else:
                    # Still include invalid entries but log warnings
                    formatted = self.format_contributor(contrib)
                    if formatted:
                        valid_contributors.append(formatted)
            
            if validate_only:
                self.log_info("Validation complete")
                return len(self.errors) == 0
            
            # Sort contributors alphabetically by name
            def extract_name(contrib):
                match = re.search(r'Name:\s*\[([^\]]+)\]', contrib)
                return match.group(1).lower() if match else contrib.lower()
            
            valid_contributors.sort(key=extract_name)
            
            # Write back to file
            with open(self.filename, 'w', encoding='utf-8') as file:
                file.writelines(valid_contributors)
            
            self.log_info(f"Successfully processed {len(valid_contributors)} contributors")
            return True
            
        except FileNotFoundError:
            self.log_error(f"File {self.filename} not found")
            return False
        except PermissionError:
            self.log_error(f"Permission denied accessing {self.filename}")
            return False
        except UnicodeDecodeError as e:
            self.log_error(f"Encoding error: {str(e)}")
            return False
        except Exception as e:
            self.log_error(f"Unexpected error: {str(e)}")
            return False
    
    def print_summary(self):
        """Print processing summary."""
        print("\n" + "="*50)
        print("PROCESSING SUMMARY")
        print("="*50)
        print(f"Errors: {len(self.errors)}")
        print(f"Warnings: {len(self.warnings)}")
        
        if self.errors:
            print("\nErrors:")
            for error in self.errors:
                print(f"  - {error}")
        
        if self.warnings:
            print("\nWarnings:")
            for warning in self.warnings:
                print(f"  - {warning}")


def main():
    """Main function."""
    parser = argparse.ArgumentParser(
        description="Manage and format CONTRIBUTORS.md file",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
  python3 manage.py                    # Process file with default settings
  python3 manage.py --backup           # Create backup before processing
  python3 manage.py --validate-only    # Only validate entries
        """
    )
    
    parser.add_argument(
        '--backup',
        action='store_true',
        help='Create backup before processing'
    )
    
    parser.add_argument(
        '--validate-only',
        action='store_true',
        help='Only validate entries without modifying'
    )
    
    parser.add_argument(
        '--file',
        default='CONTRIBUTORS.md',
        help='Contributors file to process (default: CONTRIBUTORS.md)'
    )
    
    args = parser.parse_args()
    
    # Initialize manager
    manager = ContributorManager(args.file)
    
    # Check if file exists
    if not manager.validate_file_exists():
        return 1
    
    # Create backup if requested
    if args.backup and not args.validate_only:
        if not manager.create_backup():
            return 1
    
    # Process file
    success = manager.process_file(validate_only=args.validate_only)
    
    # Print summary
    manager.print_summary()
    
    return 0 if success else 1


if __name__ == "__main__":
    sys.exit(main())
