// LANGUAGE: Go
// AUTHOR: Subodh Galande
// GITHUB: https://github.com/subodhGalande

package main

import "fmt"

func redundantSwap(s1 string, s2 string)string {

	temp := s1
	s1 = s2
	s2 = temp
	
	return(s1+ " " + s2)


}

func main() {

    hello := "World!"
    world := "Hello"

    fmt.Println(redundantSwap(hello,world))

}
