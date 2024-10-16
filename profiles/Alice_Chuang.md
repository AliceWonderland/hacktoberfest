<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Alice Chuang - Profile</title>
    <style>
        :root {
            --primary-color: #4a90e2;
            --secondary-color: #f0f4f8;
            --text-color: #333;
            --background-color: #ffffff;
            --card-background: #ffffff;
        }

        .dark-mode {
            --primary-color: #64b5f6;
            --secondary-color: #37474f;
            --text-color: #e0e0e0;
            --background-color: #121212;
            --card-background: #1e1e1e;
        }

        body {
            font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen-Sans, Ubuntu, Cantarell, 'Helvetica Neue', sans-serif;
            line-height: 1.6;
            color: var(--text-color);
            background-color: var(--background-color);
            margin: 0;
            padding: 20px;
            transition: background-color 0.3s ease;
        }

        .profile-card {
            max-width: 800px;
            margin: 0 auto;
            background-color: var(--card-background);
            border-radius: 8px;
            box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1);
            padding: 30px;
            transition: background-color 0.3s ease;
        }

        .profile-header {
            display: flex;
            justify-content: space-between;
            align-items: center;
            margin-bottom: 20px;
        }

        .profile-name {
            font-size: 2rem;
            font-weight: bold;
            margin: 0;
        }

        .profile-location {
            display: flex;
            align-items: center;
            font-size: 1rem;
            color: #666;
        }

        .profile-location::before {
            content: "📍";
            margin-right: 5px;
        }

        .profile-section {
            margin-bottom: 25px;
        }

        .section-title {
            font-size: 1.2rem;
            font-weight: bold;
            margin-bottom: 10px;
            display: flex;
            align-items: center;
        }

        .section-title::before {
            margin-right: 10px;
            font-size: 1.4rem;
        }

        .development-title::before { content: "💼"; }
        .academics-title::before { content: "🎓"; }
        .interests-title::before { content: "❤️"; }
        .projects-title::before { content: "🚀"; }

        .interests-list {
            display: flex;
            flex-wrap: wrap;
            gap: 10px;
            list-style-type: none;
            padding: 0;
        }

        .interest-item {
            background-color: var(--secondary-color);
            color: var(--primary-color);
            padding: 5px 10px;
            border-radius: 15px;
            font-size: 0.9rem;
        }

        .projects-list {
            list-style-type: none;
            padding: 0;
        }

        .project-item {
            margin-bottom: 20px;
        }

        .project-link {
            color: var(--primary-color);
            text-decoration: none;
            font-weight: bold;
        }

        .project-link:hover {
            text-decoration: underline;
        }

        .profile-footer {
            text-align: center;
            margin-top: 30px;
        }

        .github-link {
            display: inline-block;
            background-color: var(--primary-color);
            color: white;
            padding: 10px 20px;
            border-radius: 5px;
            text-decoration: none;
            font-weight: bold;
            transition: background-color 0.3s ease;
        }

        .github-link:hover {
            background-color: #3a7bc8;
        }

        .dark-mode-toggle {
            position: fixed;
            top: 20px;
            right: 20px;
            background-color: var(--primary-color);
            color: white;
            border: none;
            padding: 10px;
            border-radius: 50%;
            cursor: pointer;
            transition: background-color 0.3s ease;
        }

        .skill-bar {
            width: 100%;
            background-color: var(--secondary-color);
            border-radius: 10px;
            margin-bottom: 10px;
        }

        .skill-progress {
            width: 0;
            height: 20px;
            background-color: var(--primary-color);
            border-radius: 10px;
            transition: width 1s ease-out;
        }

        .project-gallery {
            display: flex;
            gap: 10px;
            overflow-x: auto;
            padding: 10px 0;
        }

        .project-image {
            width: 200px;
            height: 150px;
            object-fit: cover;
            border-radius: 5px;
            transition: transform 0.3s ease;
        }

        .project-image:hover {
            transform: scale(1.05);
        }

        @media (max-width: 600px) {
            .profile-card {
                padding: 20px;
            }

            .profile-header {
                flex-direction: column;
                align-items: flex-start;
            }

            .profile-location {
                margin-top: 10px;
            }
        }
    </style>
</head>
<body>
    <button class="dark-mode-toggle" onclick="toggleDarkMode()">🌓</button>
    <div class="profile-card">
        <header class="profile-header">
            <h1 class="profile-name">Alice Chuang</h1>
            <p class="profile-location">New York City, NY, USA</p>
        </header>

        <section class="profile-section">
            <h2 class="section-title development-title">Development Skills</h2>
            <div class="skill-bar">
                <div class="skill-progress" style="width: 90%;" title="Frontend Development">Frontend Development</div>
            </div>
            <div class="skill-bar">
                <div class="skill-progress" style="width: 85%;" title="React/Redux">React/Redux</div>
            </div>
            <div class="skill-bar">
                <div class="skill-progress" style="width: 80%;" title="Node.js/Express">Node.js/Express</div>
            </div>
            <div class="skill-bar">
                <div class="skill-progress" style="width: 75%;" title="Database (Sequelize/Postgres)">Database (Sequelize/Postgres)</div>
            </div>
        </section>

        <section class="profile-section">
            <h2 class="section-title academics-title">Academics</h2>
            <p>Undergraduate in B.A. (Management Information Systems) from Babson College</p>
        </section>

        <section class="profile-section">
            <h2 class="section-title interests-title">Interests</h2>
            <ul class="interests-list">
                <li class="interest-item">User Interface and User Experience</li>
                <li class="interest-item">Javascript-Based Technologies</li>
                <li class="interest-item">Node</li>
                <li class="interest-item">Express</li>
                <li class="interest-item">React/Redux</li>
                <li class="interest-item">Sequelize</li>
                <li class="interest-item">Postgres</li>
                <li class="interest-item">Sockets</li>
                <li class="interest-item">Memes</li>
                <li class="interest-item">Dogs</li>
            </ul>
        </section>

        <section class="profile-section">
            <h2 class="section-title projects-title">Projects</h2>
            <ul class="projects-list">
                <li class="project-item">
                    <a href="https://github.com/EvilDeds/slydv" class="project-link">SLYDV</a>
                    <p>A presentation slide-creation tool for Developers</p>
                </li>
                <li class="project-item">
                    <a href="https://github.com/AliceWonderland/giphy-meme" class="project-link">GIPHY Meme Generator</a>
                    <p>A desktop app lets you create your own custom memes. Built using Electron and GIPHY API</p>
                </li>
            </ul>
            <div class="project-gallery">
                <img src="/placeholder.svg?height=150&width=200" alt="SLYDV Project" class="project-image">
                <img src="/placeholder.svg?height=150&width=200" alt="GIPHY Meme Generator" class="project-image">
            </div>
        </section>

        <footer class="profile-footer">
            <a href="https://github.com/AliceWonderland" class="github-link">View GitHub Profile</a>
        </footer>
    </div>

    <script>
        function toggleDarkMode() {
            document.body.classList.toggle('dark-mode');
        }

        function animateSkillBars() {
            const skillBars = document.querySelectorAll('.skill-progress');
            skillBars.forEach(bar => {
                const width = bar.style.width;
                bar.style.width = '0%';
                setTimeout(() => {
                    bar.style.width = width;
                }, 100);
            });
        }

        document.addEventListener('DOMContentLoaded', (event) => {
            animateSkillBars();
        });

        document.querySelectorAll('a[href^="#"]').forEach(anchor => {
            anchor.addEventListener('click', function (e) {
                e.preventDefault();
                document.querySelector(this.getAttribute('href')).scrollIntoView({
                    behavior: 'smooth'
                });
            });
        });
    </script>
</body>
</html>
