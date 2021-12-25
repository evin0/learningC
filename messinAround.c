#include <stdio.h>

void main(){
    printf("Hello world\n");
    char hi[] = "Hi there\n";
    printf("%s", hi);
    int myInt = 0;
    printf("myInt here is %d\n", myInt);
    myInt++;
    printf("myInt now is %d\n", myInt);
    // Clear the buffer stream
    printf("\n");

    int a = 2,b = 1,ans1,ans2;
    ans1 = (a+b);
    ans2 = a + b;
    printf ("answer 1 is %d\nand answer 2 is %d\n", ans1, ans2);

    unsigned int i = 8;
    printf ("int i = %u\n", i);
    unsigned int intByte = sizeof(i);
    printf("size of in i is %u bytes\n", intByte);
    unsigned int strSize = sizeof(hi);

    char myChar = 'a';
    unsigned int myCharSize = sizeof(myChar);

    printf("size of string hi is %u bytes\n", strSize);

    printf("Size of myChar is %u bytes\n", myCharSize);



    return;
}