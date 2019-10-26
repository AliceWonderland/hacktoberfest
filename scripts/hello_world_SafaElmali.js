// LANGUAGE: React.js
// AUTHOR: Tahsin Safa Elmalı
// GITHUB: https://github.com/SafaElmali

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
