package main

import (
	"fmt"
)

// ANSI escape codes for coloring text
const (
	Reset  = "\033[0m"
	Red    = "\033[31m"
	Green  = "\033[32m"
	Yellow = "\033[33m"
	Blue   = "\033[34m"
	Purple = "\033[35m"
	Cyan   = "\033[36m"
)

func main() {
	fmt.Println(Red + "H" + Green + "e" + Yellow + "l" + Blue + "l" + Purple + "o" + Cyan + "," +
		Red + " W" + Green + "o" + Yellow + "r" + Blue + "l" + Purple + "d" + Cyan + "!" + Reset)
}
