// LANGUAGE: Go
// AUTHOR: Ken Kelly
// GITHUB: https://github.com/kenhkelly

package main

import "fmt"

func main() {
	desiredOutput := "Hello world!"
	nextLetterIndex := 0

	symbols := []string{" ", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "`", "~", "!", "@", "#", "$", "%", "^", "&", "*", "(", ")", "-", "_", "=", "+"}

	var output string
	Loop:
	for {
		for _, letter := range symbols {
			desiredLetter := desiredOutput[nextLetterIndex]
			if letter == string(desiredLetter) {
				output = output + letter
				nextLetterIndex++
				break
			}
		}
		if nextLetterIndex == len(desiredOutput) {
			break Loop
		}
	}

	fmt.Println(output)
}