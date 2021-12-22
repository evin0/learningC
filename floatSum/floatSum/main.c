//
//  main.c
//  floatSum
//
//  Created by Evin Odisho on 12/21/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Takes three float inputs and gets sum
    float a, b, c, sum;
    printf("Input three floating number values: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("a = %f, b = %f, c = %f\n", a, b, c);
    sum = a + b +c;
    printf ("Sum of a + b + c = %f\n", sum);
    return 0;
}
