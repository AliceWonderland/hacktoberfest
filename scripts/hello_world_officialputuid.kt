// LANGUAGE: Kotlin
// ENV: JVM
// AUTHOR: officialputuid
// GITHUB: https://github.com/officialputuid

fun main(args: Array<String>) {
    val language = if (args.size == 0) "EN" else args[0]
    //in EN & ID show language
    println(when (language) {
        "EN" -> "Hello World!"
        "ID" -> "Halo Dunia!"
        else -> "Sorry, I can't greet you in $language yet"
    })
}
