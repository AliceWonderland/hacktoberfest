# Contributing to Hacktoberfest Starter Project

Thank you for your interest in contributing to this project! This document provides guidelines and information for contributors.

## 🎯 Ways to Contribute

### 1. Add Your Name to CONTRIBUTORS.md
Add your information following this format:
```markdown
#### Name: [YOUR NAME](GitHub link)
- Place: City, State, Country
- Bio: Who are you?
- GitHub: [GitHub account name](GitHub link)
```

### 2. Create a Profile Page
Add a `Your_Name.md` file to the `profiles/` directory with your information:
```markdown
# Your Name

### Location
Your City/Country

### Academics
Your School

### Interests
- Some Things You Like

### Development
- Your Skills

### Projects
- [My Project](GitHub Link) Short Description

### Profile Link
[Your Name](GitHub Link)
```

### 3. Add a Hello World Script
Create a `hello_world_yourusername.ext` file in the `scripts/` directory:
```javascript
// LANGUAGE: Your Language
// ENV: Runtime Environment
// AUTHOR: Your Name
// GITHUB: Your GitHub URL

console.log('Hello, World!');
```

## 📋 Contribution Guidelines

### Code Style
- Use consistent indentation (2 or 4 spaces)
- Include proper comments in your code
- Follow the existing file naming conventions
- Ensure your code is clean and readable

### Commit Messages
- Use clear, descriptive commit messages
- Start with a verb (Add, Fix, Update, etc.)
- Keep the first line under 50 characters
- Example: `Add hello_world_johndoe.py script`

### Pull Request Process
1. **Fork** the repository
2. **Clone** your fork locally
3. **Create** a new branch for your changes
4. **Make** your changes following the guidelines
5. **Test** your changes (if applicable)
6. **Commit** with a clear message
7. **Push** to your fork
8. **Create** a pull request

### Pull Request Template
When creating a pull request, please include:
- **Description**: What changes did you make?
- **Type**: New contributor, profile, script, or other
- **Checklist**: 
  - [ ] I have read the contributing guidelines
  - [ ] My code follows the project's style guidelines
  - [ ] I have tested my changes (if applicable)
  - [ ] My commit message is clear and descriptive

## 🚫 What NOT to Do

- Don't modify other people's contributions
- Don't add inappropriate content
- Don't spam with multiple similar PRs
- Don't include personal information like email addresses in public files
- Don't add large files or binaries

## 🔧 Development Setup

### Prerequisites
- Git
- Text editor or IDE
- Python 3.6+ (for running management scripts)
- Web browser (for testing the website)

### Local Development
1. Fork and clone the repository
2. Open `index.html` in your browser to view the website
3. Make your changes
4. Test locally before submitting

### Using the Management Script
The enhanced `manage.py` script helps maintain the CONTRIBUTORS.md file:

```bash
# Validate entries
python3 manage.py --validate-only

# Process with backup
python3 manage.py --backup

# Get help
python3 manage.py --help
```

## 🎉 Recognition

All contributors will be:
- Listed in the CONTRIBUTORS.md file
- Featured on the project website
- Part of the Hacktoberfest celebration!

## 📞 Getting Help

If you need help or have questions:
1. Check existing issues and pull requests
2. Create a new issue with your question
3. Be patient and respectful in all interactions

## 📜 Code of Conduct

This project follows the [Contributor Covenant Code of Conduct](https://www.contributor-covenant.org/version/2/1/code_of_conduct/). By participating, you are expected to uphold this code.

### Our Pledge
We pledge to make participation in our project a harassment-free experience for everyone, regardless of age, body size, disability, ethnicity, gender identity and expression, level of experience, nationality, personal appearance, race, religion, or sexual identity and orientation.

## 🏷️ Labels and Issues

We use the following labels to categorize issues and PRs:
- `good first issue` - Perfect for newcomers
- `hacktoberfest` - Hacktoberfest-related contributions
- `documentation` - Documentation improvements
- `enhancement` - New features or improvements
- `bug` - Bug fixes
- `invalid` - Invalid contributions

## 🎊 Hacktoberfest Specific Guidelines

During Hacktoberfest (October 1-31):
- Focus on quality over quantity
- Make meaningful contributions
- Follow the official Hacktoberfest rules
- Be patient as maintainers review many PRs
- Help others by reviewing and providing feedback

## 📈 Project Statistics

This project has welcomed contributions from:
- 500+ contributors
- 50+ countries
- 25+ programming languages

Thank you for being part of our community! 🎃

---

Happy contributing! 🚀
