import { useState } from 'react'
import { BrowserRouter as Router, Routes, Route } from "react-router-dom"
import Home from './components/home'
import Login from './components/login'
import Chatbot from './components/ChatBot'
import HospitalDashboard from './components/HospitalDashboard'
import RiskDisplay from './components/RiskDisplay'


function App() {
 

  return (
  
     
    <>
    <Router>
          <Routes>
          <Route path='/' element={<Home />} />
          <Route path='/login' element={<Login/>} />
          <Route path='/ChatBot' element={<Chatbot/>} />
          <Route path='/HospitalDashboard' element={<HospitalDashboard/>} />
          <Route path='/RiskDisplay' element={<RiskDisplay/>} />  
          
          </Routes>
        </Router></>
  )
}

export default App
