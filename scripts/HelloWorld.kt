// Language: Kotlin
// Author: Jonas Häusler
// GitHub: https://www.github.com/JonasHae

import com.sun.xml.internal.bind.v2.util.EditDistance.editDistance
import java.util.*
import java.util.concurrent.TimeUnit

/*
 * get all chars of the source string
 * create two buffer strings (buffer1 and buffer2)
 * write a random char from the source string to a random position of buffer1
 * compare buffer1 to the source string
 * if it's more like the source string than buffer2, copy buffer1 to buffer2, if not copy buffer2 to buffer1
 * continue until buffer1 is equals the source string
 */
fun main(args: Array<String>) {
    val source = "Hello, world!"
    val charset = source.toCharArray()
    val buffer = StringBuilder("".padStart(source.length, '.'))
    val buffer2 = StringBuilder(buffer)
    val random = Random()

    while (buffer.toString() != source) {
        buffer.setCharAt(random.nextInt(source.length), charset[random.nextInt(charset.size)])

        print("\r$buffer")
        TimeUnit.MILLISECONDS.sleep(10)

        if (similarity(buffer.toString(), source) > similarity(buffer2.toString(), source)) {
            buffer2.setLength(0)
            buffer2.append(buffer)
        } else {
            buffer.setLength(0)
            buffer.append(buffer2)
        }
    }
}

private fun similarity(s1: String, s2: String): Double {
    return if (s1.length > s2.length) {
        (s1.length - editDistance(s1, s2)) / s1.length.toDouble()
    } else {
        (s2.length - editDistance(s2, s1)) / s2.length.toDouble()
    }
}