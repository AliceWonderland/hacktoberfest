// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Mayur Thakkar
// GITHUB: https://github.com/MThakkar121

console.log('Hello, World!');

// LANGUAGE: Javascript
// FRAMEWORK: React
// ENV: Node.js
// AUTHOR: Mayur Thakkar
// GITHUB: https://github.com/MThakkar121

//By using reacts library 
import React from 'react';
import logo from './logo.svg';
import './App.css';

function App() {
    return ( 
      <div className = "App">
        <header className = "App-header">
        <img src = { logo } className = "App-logo" alt = "logo"/>
        <p>
        HI! <code> :-) </code> I'm Mayur. 
        </p> 
        </header> 
        </div>
    );
}

export default App;
