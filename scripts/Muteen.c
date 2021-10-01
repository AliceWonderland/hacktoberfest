// Q) Write a program to print a string 1000 times without using loops

#include <stdio.h>

int num = 1;

void p1000();
void p500();
void p100();
void p50();
void p10();
void p5();
void p1();





int main(){

    p1000();

    return 0;
}








// To print 1000 times
void p1000(){
    p500();
    p500();
}



// To print 500 times 
void p500(){
    p100();
    p100();
    p100();
    p100();
    p100();
}




// To print 100 times 
void p100(){
    p50();
    p50();
}


// To print 50 times 
void p50(){
    p10();
    p10();
    p10();
    p10();
    p10();
}


// To print 10 times 
void p10(){
    p5();
    p5();
}


// To print 5 times
void p5(){
    p1();
    p1();
    p1();
    p1();
    p1();
}

// To print 1 time
void p1(){
    printf("%d) I am Muteen, I am printing 1000 times without using loops or recursion\n", num);
    num++;
}