//
//  main.c
//  fahrenheitToCel
//
//  Created by Evin Odisho on 12/21/21.
//

#include <stdio.h>

int main(void) {
    double far, cel;
    double conv = -32 * (5/9);
    printf("Enter farhenheit value: ");
    scanf ("%lf", &far);
    //debug
    printf("far is %lf\n", far);
    cel = ((far - 32) * (5/9));
    //cel = far + conv;
    printf("%lf degrees farhenheit is equal to %lf degrees celsius.\n", far, cel);
    return 0;
}
