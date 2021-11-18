#include <stdio.h>

/* Progam Seraph keeps Neo in check = Neo vs Seraph and Neo teaming up with Seraph is a constant 
to keep balance in The Matrix */

int main(){

    /* char userInput[100]; */
    int userInput = 0;
    

    while(userInput != 4){
        printf("-----------------------------------------\n");
        printf("10101010101010101010101010101010101010101010\n");
        printf("11111111100000111010010101001010111110101101\n");
        printf("10101010101010101010101010101010101010101010\n");
        printf("11111111100000111010010101001010111110101101\n");
        printf("|||WELCOME TO THE MATRIX||||THIS LINE IS CLEAN|\n\n");
        printf("Neo: Hello Seraph - you could have just asked\n\n");
        printf("Seraph: Hello Neo are you an odd or even program ? PRESS 1 to Compute\n");
        printf("Neo: Can you Reverse engineer the strings hidden in tumblers ? PRESS 2 to Compute\n");
        printf("Seraph: I can - let's sort the list of potentials first : PRESS 3 to Compute >: ");
        scanf("%d", &userInput); 
        
       /* stringCompare(userInput)*/
        if(userInput == 1){
            int inputVal;
            printf("\nPlease enter a number Neo to see if you are an Odd or Even Program: ");
            scanf("%d", &inputVal);
            
            if(inputVal % 2 == 0){
               printf("You are Even Neo\n");
            }
            else{
                printf("You are 0dd Neo\n");
            }
        }
        else if(userInput == 4){
            printf("YOU ARE THE ONE NEO");

        }
  
    }

    return 0;

} 

/*
char stringCompare(char userInput[100], char Value[100]){
    
    strcpy(userInput, value)


}

*/




