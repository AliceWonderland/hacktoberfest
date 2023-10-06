package main

import (
	"fmt"
	"bufio"
	"os"
)

//To run: `go run hello_world_cecyc.go`
func main () {
	//Create a new reader for user input
	reader := bufio.NewReader(os.Stdin)
	fmt.Println("What is your name?")
	//Read string up until line break, ignore error returned
	name, _ := reader.ReadString('\n')
	//Print greeting with format name
	fmt.Printf("Hello, %s",name)
}
