// LANGUAGE: Kotlin
// ENV: JVM
// AUTHOR: Chanoknad Mekaew
// GITHUB: https://github.com/annchar

fun main(args: Array<String>) {
    val language = if (args.size == 0) "EN" else args[0]
    println(when (language) {
        "EN" -> "Hello, World!"
        "TH" -> "สวัสดี ชาวโลก!"
        else -> "Sorry, I can't greet you in $language yet"
    })
}
