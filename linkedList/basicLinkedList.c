#include <stdio.h>
#include <stdlib.h>

// With this typedef, I don't need to specify type (struct), when calling sPerson
typedef struct sPerson{
    int age;
	struct sPerson* next;
} sPerson;
// sPerson* next;


sPerson *getNewPerson(const int age)
{
    sPerson *newPerson = NULL;
    newPerson = malloc(sizeof(sPerson));
	newPerson->next = NULL;
    newPerson->age = age;
    printf("Created new person at %p\n", newPerson);
    return newPerson;
};

void printPerson(const sPerson* person, const char *comment)
{
    if (person == NULL){
        printf("%s is NULL\n", comment);
    }
    else{
        printf("%s: age:%d address:%p nextInLine: %p\n", comment, person->age, person, person->next);
    }
}


int main(){
	printf("---START---\n\n");
	// Will continue to dynamically allocate memory, as can be seen with
	// increasing address values
    sPerson* first = NULL;
    sPerson* second = NULL;
    printPerson(first, "first");
    printPerson(second, "second");

    first = getNewPerson(25);
    second = getNewPerson(15);
    printPerson(first, "first");
    printPerson(second, "second");


	first = getNewPerson(25);
    second = getNewPerson(45);
    printPerson(first, "first");
    printPerson(second, "second");

	first = getNewPerson(25);
    second = getNewPerson(45);
    printPerson(first, "first");
    printPerson(second, "second");

	first->next = second;
	printPerson(first, "First");
	printPerson(first->next, "first->nextInLine: ");
	printPerson(second, "Second");


	free(first);
	free(second);

	first = NULL;
	second = NULL;
    return 0;
}
