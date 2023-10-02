// LANGUAGE: Java Script
// AUTHOR: Zain
// GITHUB: https://github.com/zainulabaideen/hacktoberfest
function rainbowText(text) {
    const rainbowColors = ['#FF0000', '#FF7F00', '#FFFF00', '#00FF00', '#0000FF', '#4B0082', '#8B00FF'];
    let index = 0;
  
    for (const char of text) {
      const rainbowChar = `%c${char}`;
      const color = rainbowColors[index % rainbowColors.length];
      console.log(rainbowChar, `color: ${color}; font-weight: bold; font-size: 24px;`);
      index++;
    }
  }
  
  rainbowText('Hello, world!');
  
  