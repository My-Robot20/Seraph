#include <stdio.h>

/* Progam Seraph keeps Neo in check = Neo vs Seraph and Neo teaming up with Seraph is a constant 
to keep balance in The Matrix */


void oddEven();
void ReverseStringsInTumblers();

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
           oddEven();
        }
        else if(userInput == 2){
            ReverseStringsInTumblers();
        }
        else if(userInput == 4){
            printf("YOU ARE THE ONE NEO");

        }
  
    }

    return 0;

} 

void oddEven(){
        int oddEvenInput;
        printf("\nPlease enter a number Neo to see if you are an Odd or Even Program: ");
        scanf("%d", &oddEvenInput);
            
        if(oddEvenInput % 2 == 0){
            printf("You are Even Neo\n");
        }
        else{
            printf("You are 0dd Neo\n");
        }
}


void ReverseStringsInTumblers(){
    char myString[100];
    
    printf("Type in a word to see the code hidden in tumblers: ");
    scanf("%s", myString);
    printf("TEST FINISH CODE WORD = %s\n",myString);
    /* find reverse and print reverse string data with binary data and hex */
}



