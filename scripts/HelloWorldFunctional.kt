
/*
* Language: Kotlin
* Env: Kotlin
* Author: Henrique Horbovyi
* Github: https://github.com/henriquehorbovyi
*/

val messagePrinter: (String) -> Unit = {
    println("Hello, $it")
}

fun main() {
    messagePrinter("World!")
}
