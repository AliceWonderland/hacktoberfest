package main

// LANGUAGE: Golang
// AUTHOR: Vilas Hegde
// GITHUB: https://github.com/vilasrhegde
import (
	"bufio"
	"fmt"
	"os"
)

// To run: `go run hello_world_cecyc.go`
func main() {
	//reader to take name input from user
	reader := bufio.NewReader(os.Stdin)
	fmt.Println("What is your name?")
	name, _ := reader.ReadString('\n')
	//Print Hello World and name
	fmt.Printf("Hello World to, %s", name)
}
