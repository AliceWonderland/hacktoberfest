// Mobile Navigation Toggle
document.addEventListener('DOMContentLoaded', function() {
    const hamburger = document.querySelector('.hamburger');
    const navMenu = document.querySelector('.nav-menu');
    const navLinks = document.querySelectorAll('.nav-link');

    // Toggle mobile menu
    hamburger.addEventListener('click', function() {
        hamburger.classList.toggle('active');
        navMenu.classList.toggle('active');
    });

    // Close mobile menu when clicking on a link
    navLinks.forEach(link => {
        link.addEventListener('click', function() {
            hamburger.classList.remove('active');
            navMenu.classList.remove('active');
        });
    });

    // Smooth scrolling for navigation links
    navLinks.forEach(link => {
        link.addEventListener('click', function(e) {
            e.preventDefault();
            const targetId = this.getAttribute('href');
            const targetSection = document.querySelector(targetId);
            
            if (targetSection) {
                const offsetTop = targetSection.offsetTop - 70; // Account for fixed navbar
                window.scrollTo({
                    top: offsetTop,
                    behavior: 'smooth'
                });
            }
        });
    });

    // Navbar scroll effect
    window.addEventListener('scroll', function() {
        const navbar = document.querySelector('.navbar');
        if (window.scrollY > 50) {
            navbar.style.background = 'rgba(255, 255, 255, 0.98)';
            navbar.style.boxShadow = '0 2px 20px rgba(0, 0, 0, 0.1)';
        } else {
            navbar.style.background = 'rgba(255, 255, 255, 0.95)';
            navbar.style.boxShadow = 'none';
        }
    });

    // Load contributors data
    loadContributors();

    // Animate elements on scroll
    const observerOptions = {
        threshold: 0.1,
        rootMargin: '0px 0px -50px 0px'
    };

    const observer = new IntersectionObserver(function(entries) {
        entries.forEach(entry => {
            if (entry.isIntersecting) {
                entry.target.classList.add('fade-in-up');
            }
        });
    }, observerOptions);

    // Observe all cards and sections
    const elementsToAnimate = document.querySelectorAll('.about-card, .contribute-card, .stat-card, .contributor-card');
    elementsToAnimate.forEach(el => observer.observe(el));

    // Counter animation for stats
    animateCounters();
});

// Load and display contributors
async function loadContributors() {
    try {
        const response = await fetch('CONTRIBUTORS.md');
        const text = await response.text();
        const contributors = parseContributors(text);
        displayContributors(contributors.slice(0, 12)); // Show first 12 contributors
        updateStats(contributors.length);
    } catch (error) {
        console.log('Could not load contributors:', error);
        // Fallback to sample data
        displaySampleContributors();
    }
}

// Parse contributors from markdown
function parseContributors(markdown) {
    const contributors = [];
    const sections = markdown.split('####').filter(section => section.trim());
    
    sections.forEach(section => {
        const lines = section.trim().split('\n');
        if (lines.length > 0) {
            const contributor = {};
            
            lines.forEach(line => {
                line = line.trim();
                if (line.startsWith('Name:')) {
                    const nameMatch = line.match(/Name:\s*\[([^\]]+)\]/);
                    contributor.name = nameMatch ? nameMatch[1] : line.replace('Name:', '').trim();
                } else if (line.startsWith('- Place:')) {
                    contributor.location = line.replace('- Place:', '').trim();
                } else if (line.startsWith('- Bio:')) {
                    contributor.bio = line.replace('- Bio:', '').trim();
                } else if (line.startsWith('- GitHub:')) {
                    const githubMatch = line.match(/\[([^\]]+)\]\(([^)]+)\)/);
                    if (githubMatch) {
                        contributor.github = githubMatch[2];
                    }
                }
            });
            
            if (contributor.name) {
                contributors.push(contributor);
            }
        }
    });
    
    return contributors;
}

// Display contributors in the grid
function displayContributors(contributors) {
    const grid = document.getElementById('contributors-grid');
    if (!grid) return;
    
    grid.innerHTML = contributors.map(contributor => `
        <div class="contributor-card">
            <div class="contributor-name">${escapeHtml(contributor.name || 'Anonymous')}</div>
            <div class="contributor-location">
                <i class="fas fa-map-marker-alt"></i>
                ${escapeHtml(contributor.location || 'Unknown')}
            </div>
            <div class="contributor-bio">${escapeHtml(contributor.bio || 'No bio available')}</div>
            ${contributor.github ? `
                <div style="margin-top: 1rem;">
                    <a href="${escapeHtml(contributor.github)}" target="_blank" style="color: var(--primary-color); text-decoration: none; font-size: 0.875rem;">
                        <i class="fab fa-github"></i> View Profile
                    </a>
                </div>
            ` : ''}
        </div>
    `).join('');
}

// Display sample contributors as fallback
function displaySampleContributors() {
    const sampleContributors = [
        {
            name: "Alice Wonderland",
            location: "New York City, NY, USA",
            bio: "I love DOGS! 🐶",
            github: "https://github.com/AliceWonderland"
        },
        {
            name: "Hemant Yadav",
            location: "India",
            bio: "Technology enthusiast with a passion for web development",
            github: "https://github.com/hk2166"
        },
        {
            name: "Aishwarya Pradhan",
            location: "Gurugram, India",
            bio: "Learner, Coder, INFJ, multipotentialite and Python/Django Developer",
            github: "https://github.com/aishwaryapradhan"
        },
        {
            name: "John Doe",
            location: "San Francisco, CA, USA",
            bio: "Full-stack developer passionate about open source",
            github: "https://github.com/johndoe"
        },
        {
            name: "Jane Smith",
            location: "London, UK",
            bio: "Frontend developer and UI/UX enthusiast",
            github: "https://github.com/janesmith"
        },
        {
            name: "Carlos Rodriguez",
            location: "Madrid, Spain",
            bio: "Backend developer specializing in Node.js",
            github: "https://github.com/carlosrodriguez"
        }
    ];
    
    displayContributors(sampleContributors);
}

// Update statistics
function updateStats(contributorCount) {
    const countElement = document.getElementById('contributor-count');
    if (countElement) {
        countElement.textContent = contributorCount + '+';
    }
}

// Animate counter numbers
function animateCounters() {
    const counters = document.querySelectorAll('.stat-number');
    
    counters.forEach(counter => {
        const target = parseInt(counter.textContent.replace(/\D/g, ''));
        const increment = target / 100;
        let current = 0;
        
        const timer = setInterval(() => {
            current += increment;
            if (current >= target) {
                counter.textContent = target + '+';
                clearInterval(timer);
            } else {
                counter.textContent = Math.floor(current) + '+';
            }
        }, 20);
    });
}

// Utility function to escape HTML
function escapeHtml(text) {
    const map = {
        '&': '&amp;',
        '<': '&lt;',
        '>': '&gt;',
        '"': '&quot;',
        "'": '&#039;'
    };
    return text.replace(/[&<>"']/g, function(m) { return map[m]; });
}

// Add loading states
function showLoading(element) {
    element.innerHTML = '<div class="loading">Loading...</div>';
}

// Parallax effect for hero section
window.addEventListener('scroll', function() {
    const scrolled = window.pageYOffset;
    const hero = document.querySelector('.hero');
    if (hero) {
        const rate = scrolled * -0.5;
        hero.style.transform = `translateY(${rate}px)`;
    }
});

// Add click effects to buttons
document.addEventListener('click', function(e) {
    if (e.target.classList.contains('btn')) {
        const button = e.target;
        const ripple = document.createElement('span');
        const rect = button.getBoundingClientRect();
        const size = Math.max(rect.width, rect.height);
        const x = e.clientX - rect.left - size / 2;
        const y = e.clientY - rect.top - size / 2;
        
        ripple.style.cssText = `
            position: absolute;
            width: ${size}px;
            height: ${size}px;
            left: ${x}px;
            top: ${y}px;
            background: rgba(255, 255, 255, 0.3);
            border-radius: 50%;
            transform: scale(0);
            animation: ripple 0.6s linear;
            pointer-events: none;
        `;
        
        button.style.position = 'relative';
        button.style.overflow = 'hidden';
        button.appendChild(ripple);
        
        setTimeout(() => {
            ripple.remove();
        }, 600);
    }
});

// Add ripple animation CSS
const style = document.createElement('style');
style.textContent = `
    @keyframes ripple {
        to {
            transform: scale(4);
            opacity: 0;
        }
    }
    
    .loading {
        display: flex;
        justify-content: center;
        align-items: center;
        padding: 2rem;
        color: var(--gray-600);
    }
`;
document.head.appendChild(style);

// Theme toggle functionality (optional enhancement)
function initThemeToggle() {
    const themeToggle = document.getElementById('theme-toggle');
    if (!themeToggle) return;
    
    const currentTheme = localStorage.getItem('theme') || 'light';
    document.documentElement.setAttribute('data-theme', currentTheme);
    
    themeToggle.addEventListener('click', function() {
        const currentTheme = document.documentElement.getAttribute('data-theme');
        const newTheme = currentTheme === 'dark' ? 'light' : 'dark';
        
        document.documentElement.setAttribute('data-theme', newTheme);
        localStorage.setItem('theme', newTheme);
    });
}

// Initialize theme toggle if element exists
document.addEventListener('DOMContentLoaded', initThemeToggle);

// Add search functionality for contributors (optional enhancement)
function initContributorSearch() {
    const searchInput = document.getElementById('contributor-search');
    if (!searchInput) return;
    
    let allContributors = [];
    
    searchInput.addEventListener('input', function(e) {
        const query = e.target.value.toLowerCase();
        const filtered = allContributors.filter(contributor => 
            contributor.name.toLowerCase().includes(query) ||
            contributor.location.toLowerCase().includes(query) ||
            contributor.bio.toLowerCase().includes(query)
        );
        displayContributors(filtered);
    });
}

// Error handling for failed requests
window.addEventListener('error', function(e) {
    console.error('An error occurred:', e.error);
});

// Performance optimization: Lazy load images
function lazyLoadImages() {
    const images = document.querySelectorAll('img[data-src]');
    const imageObserver = new IntersectionObserver((entries, observer) => {
        entries.forEach(entry => {
            if (entry.isIntersecting) {
                const img = entry.target;
                img.src = img.dataset.src;
                img.classList.remove('lazy');
                imageObserver.unobserve(img);
            }
        });
    });
    
    images.forEach(img => imageObserver.observe(img));
}

// Initialize lazy loading
document.addEventListener('DOMContentLoaded', lazyLoadImages);
