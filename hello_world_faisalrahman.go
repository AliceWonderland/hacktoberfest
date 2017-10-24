// LANGUAGE: Golang
// AUTHOR: Faisal Rahman
// GITHUB: https://github.com/fzlrhmn

// This hello world function is uses struct in go
// We initiate hwt variable from HelloWorld struct
// and print it out
package main

import (
	"fmt"
)

// HelloWorld struct
type HelloWorld struct {
	Hello string
	World string
}

// main function that executed by go
func main() {
	hwt := &HelloWorld{
		Hello: "Hello",
		World: "World",
	}

	hwp := fmt.Sprintf("%s %s!", hwt.Hello, hwt.World)

	fmt.Println(hwp)
}
