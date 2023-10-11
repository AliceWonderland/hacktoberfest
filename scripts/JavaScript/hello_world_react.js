// LANGUAGE: Javascript (React Component)
// AUTHOR: Pratyum Jagannath
// GITHUB: https://github.com/Pratyum/

import React, { Component } from 'react';
import ReactDOM from 'react-dom';
export default class HelloWorld extends Component {
    render () {
        return (
            <div>
                <h1>Hello World</h1>
            </div>
        );
    }
}

ReactDOM.render(<HelloWorld/>,document.findElementById('react-app'));
