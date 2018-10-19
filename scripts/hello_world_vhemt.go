// LANGUAGE: Go 1.11
// AUTHOR: Luca Valentini
// GITHUB: https://github.com/vhemt

package main

import "fmt"

func reverse(s string) string {
	r := []rune(s)
	for i, j := 0, len(r)-1; i < len(r)/2; i, j = i+1, j-1 {
		r[i], r[j] = r[j], r[i]
	}
	return string(r)
}

func main() {
	fmt.Printf(reverse("\n!dlroW ,olleH"))
}
