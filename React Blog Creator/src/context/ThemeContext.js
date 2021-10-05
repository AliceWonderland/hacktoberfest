import React, { createContext,useState } from 'react'
export const ThemeContext= createContext();
const ThemeContextProvider = (props) => {
    const [islight,setislight]=useState(true)
    const [light,setlight]=useState({ui:'#555',bg:"#fff"})
    const [dark,setdark]=useState({ui:'#fff',bg:"555"})
    return (
        <div>
            <ThemeContext.Provider value={{islight,light,dark}}>
                {props.children}
            </ThemeContext.Provider>

            
        </div>
    )
}

export default ThemeContextProvider;


