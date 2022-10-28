#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int RockPaperScissors(char you, char comp){
   // this returns -1 if you lose and 1 if you win
    
    if(you == comp){
        return 0;
    }


    if(you=='r' && comp=='s'){
        return 1;
    }
    else if(you=='s' && comp=='r'){
        return -1;
    }

    if(you=='r' && comp=='p'){
        return -1;
    }
    else if(you=='p' && comp=='r'){
        return 1;
    }

    if(you=='s' && comp=='p'){
        return 1;
    }
    else if(you=='p' && comp=='s'){
        return -1;
    }

}
int main(){
    char t;
    do{
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        comp = 'r';
    }
    else if(number>33 && number<66){
        comp='p';
    }
    else{
        comp='s';
    }
    
    printf("Enter 'r' for rock, 'p' for paper and 's' for scissors\n");
    scanf("%c", &you);
    getchar();

    if(you=='r' || you=='p' || you=='s'){
    
    int result = RockPaperScissors(you, comp);
    if(result ==0){
        printf("Game draw!\n");
    }
    else if(result==1){
        printf("You win!\n");
    }
    else{
        printf("You Lose!\n");
    }
    printf("You chose %c and computer chose %c.\n\n\n", you, comp);
    printf("Do you want to try again!\n");
    printf("press 'y' for Yes and 'n' for No\n");
    scanf("%c",&t);
    getchar();
    if(!(t=='y'||t=='n')){
        printf("wrong character entered enter again\n");
        continue;
    }
    }    
    else{
        printf("Oops!You have entered wrong character\n");
    }
    
    }
    while(t!='n');
    
    return 0;
}