//
//  main.c
//  fahrenheitToCel
//
//  Created by Evin Odisho on 12/21/21.
//

#include <stdio.h>

int main(void) {
    double far, cel;
    printf("Enter farhenheit value: ");
    scanf ("%lf", &far);
    cel = (far - 32) * 5/9;
    printf("%lf degrees farhenheit is equal to %lf degrees celsius.\n", far, cel);
    return 0;
}
