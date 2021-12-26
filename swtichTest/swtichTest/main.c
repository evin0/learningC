//
//  main.c
//  swtichTest
//
//  Created by Evin Odisho on 12/25/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
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
        default:
            printf("This is the default.\n");
    }
    return 0;
}
