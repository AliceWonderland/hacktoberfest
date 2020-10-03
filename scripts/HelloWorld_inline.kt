// LANGUAGE: Kotlin
// AUTHOR: Yothin Homjan
// GITHUB: https://github.com/yotheone0909

inline class Name(val s: String) {
    val length: Int
        get() = s.length

    fun greet() {
        println("Hello, $s")
    }
}    

fun main() {
    val name = Name("World!")
    name.greet() // method `greet` is called as a static method
    println(name.length) // property getter is called as a static method
}
