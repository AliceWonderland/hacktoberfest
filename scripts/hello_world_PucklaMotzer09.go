package main

import (
	"fmt"
)

type helloworld struct {
	value [11]byte
}

var word helloworld

func (hw *helloworld) say(amount int) {
	for i := 0; i < amount; i++ {
		fmt.Println(string(hw.value[:]))
	}
}

func main() {
	for i := 0; i < 11; i++ {
		switch i {
		case 0:
			word.value[i] = 'H'
		case 1:
			word.value[i] = 'e'
		case 2, 3, 9:
			word.value[i] = 'l'
		case 4, 7:
			word.value[i] = 'o'
		case 5:
			word.value[i] = ' '
		case 6:
			word.value[i] = 'W'
		case 8:
			word.value[i] = 'r'
		case 10:
			word.value[i] = 'd'
		}
	}

	word.say(1)
}
