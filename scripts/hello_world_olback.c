/* LANGUAGE: C
 * AUTHOR: Edwin S
 * GITHUB: https://github.com/olback
 */

 #include <stdio.h>
 
 const char string[] = "Hello World!";
 
 int main()
 {
     for(int i; i < sizeof(string); i++) {
        printf("%c\n", string[i]);
     }
     return 0;
 }
 