// LANGUAGE: Javascript
// ENV: Frontend(ReactJS)
// AUTHOR: Miguh Ruiz
// GITHUB: https://github.com/MiguhRuiz

import React from 'react'

class CustomHello extends React.Component {
  constructor(props) {
    super(props)
    this.setState = {
      exampleState: false
    }
  }
  
  componentDidMount(){
    console.log('Component was mounted')
  }
  
  render() {
    return(
      <h1>Hi {this.props.name}</h1>
    )
  }
 }
 
 export default CustomHello
