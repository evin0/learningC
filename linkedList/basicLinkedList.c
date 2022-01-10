#include <stdio.h>
#include <stdlib.h>

// With this typedef, I don't need to specify type (struct), when calling sPerson
typedef struct sPerson{
    int age;
} sPerson;


sPerson *getNewPerson(const int age)
{
    sPerson *newPerson = NULL;
    newPerson = malloc(sizeof(sPerson));
    newPerson->age = age;
    printf("Created new person at %p\n", newPerson);
    return newPerson;
};


int main(){
    sPerson* first = NULL;
    sPerson* second = NULL;
    first = getNewPerson(125);
    second = getNewPerson(100);

    return 0;
}
