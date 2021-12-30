#include <stdio.h>


// Will print out "This is line 1" "This is line 2" and so on...

void lineLoop(int lineNum){
    for (int count = 1; count <= lineNum; ++count){
        printf("This is line %d\n", count);
    }
    return;
}


void startMesg(char mess[100]){
     mess = "This program is to practice calling multiple functions. Will print n number of lines that are user defined.\n";
     printf("%s", mess);
     return;
}

int numReturn(int lines){
    int count;
    for (count = 1; count < lines; ++count){
    }
    return count;
}


int main(){
    int lineInput;
    char myMes[100];
    startMesg(myMes);
    printf("Will print user defined amount of lines. Please enter number of lines to print: ");
    scanf("%d", &lineInput);
    lineLoop(lineInput);
    printf("In total, there were %d lines.\n", numReturn(lineInput));
    printf("\n");
    return 0;
}
