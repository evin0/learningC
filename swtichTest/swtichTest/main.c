//
//  main.c
//  swtichTest
//
//  Created by Evin Odisho on 12/25/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    
    // Run this 3 times
    for (int count = 0; count <= 2; ++count)
    {
        int i;
        printf("Enter an integer: ");
        scanf("%d", &i);
        switch(i){
            case 1:
                printf("This is case 1\n");
                break;
            case 2:
                printf("This is case 2\n");
                break;
            case 3:
                printf("This will carry over to... ");
            case 4:
                printf("HERE!\n");
                break;
            default:
                printf("This is the default.\n");
        }
    }
    printf("DONE\n");
    return 0;
}
