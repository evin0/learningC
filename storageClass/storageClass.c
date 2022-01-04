#include <stdio.h>

// External/Global Variable
extern char extStr[] = "Hey there!\n";

void name(char nameIn[50]){
    printf("What's your name? ");
    // Can't just do regular scanf %s when taking in string input
    scanf("%[^\n]%*c", nameIn);
    printf("Nice to meet you %s!\n", nameIn);
    return;
}


int main(){
    printf("%s", extStr);
    char nameInput[50];
    name(nameInput);
    char myChar;
    printf("Enter a single character: ");
    scanf("%c", &myChar);
    printf("The character is: %c\n", myChar);
    return 0;
}