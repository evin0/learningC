#include <stdio.h>

void main(){
    printf("Hello world\n");
    char hi[] = "Hi there\n";
    printf(hi);
    int myInt = 0;
    printf("myInt here is %i\n", myInt);
    myInt++;
    printf("myInt now is %i\n", myInt);
    // Clear the buffer stream
    printf("\n");
    return;
}