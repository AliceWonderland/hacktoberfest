// Language: Kotlin
// Author: yotheone0909
// Github: https://github.com/yotheone0909

inline class Name(val s: String) {
    fun greet() {
        println("Hello, $s")
    }
}    

fun main() {
    val name = Name("World!")
    name.greet() // method `greet` is called as a static method
}
