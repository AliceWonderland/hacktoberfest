"""
Script for managing the CONTRIBUTORS.md file.

What this script does?
- Removes trailing whitespaces before '####'
- Replaces every heading with '####'
- Sorts the list of contributors

Running the script:
python3 manage.py

PS: DO NOT USE PYTHON 2
"""
import re
import logging

# Setup basic logging
logging.basicConfig(level=logging.INFO, format='%(levelname)s: %(message)s')

def format_contributor(contrib):
    """
    Helper function to format the contributor details properly.
    - Fixes common issues in the text format.
    - Adds proper heading format for each contributor.
    """
    name_str = 'Name: ['

    # Fix common typos or formatting mistakes
    contrib = contrib.replace('：', ':')
    contrib = contrib.replace('htpps', 'https')
    contrib = contrib.replace('Name:[', name_str)
    contrib = contrib.replace('Name : [', name_str)
    contrib = contrib.replace('Name :[', name_str)
    contrib = contrib.replace('Name: [ ', name_str)
    
    # Ensure each contributor entry starts with '#### '
    contrib = '#### ' + contrib.strip() + '\n\n'
    
    return contrib


def clean_and_format_file(file_path):
    """
    Reads the file, cleans up trailing whitespaces and adjusts headings.
    """
    try:
        with open(file_path, 'r+') as file:
            new_file_data = []
            
            # Process each line in the file
            for line in file.readlines():
                # Normalize heading levels to '#### '
                line = re.sub(r'^#{1,3} ', '#### ', line)
                
                # Remove any leading whitespace before headings
                if line.startswith(' ##'):
                    new_file_data.append(line.lstrip())
                else:
                    new_file_data.append(line)
            
            # Rewrite the cleaned-up data back to the file
            file.seek(0)
            file.truncate()
            file.writelines(new_file_data)

        logging.info("File cleaned and formatted successfully.")
    
    except Exception as e:
        logging.error(f"Error while cleaning and formatting file: {e}")


def sort_and_save_contributors(file_path):
    """
    Sorts the list of contributors alphabetically and saves it back to the file.
    """
    try:
        with open(file_path, 'r+') as file:
            # Split contributors by '#### ' (the heading), clean and format them
            contributors = [contrib.strip() for contrib in file.read().split('####') if contrib]
            contributors = [format_contributor(contrib) for contrib in contributors]
            
            # Sort contributors alphabetically
            contributors = sorted(contributors)
            
            # Rewrite the sorted list to the file
            file.seek(0)
            file.truncate()
            file.writelines(contributors)

        logging.info("Contributors sorted and saved successfully.")
    
    except Exception as e:
        logging.error(f"Error while sorting and saving contributors: {e}")


if __name__ == "__main__":
    # Path to the CONTRIBUTORS.md file
    file_path = 'CONTRIBUTORS.md'
    
    # Step 1: Clean and format the file
    clean_and_format_file(file_path)
    
    # Step 2: Sort contributors and save the file
    sort_and_save_contributors(file_path)

    logging.info("Script completed successfully.")
