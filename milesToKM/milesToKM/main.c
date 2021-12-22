//
//  main.c
//  milesToKM
//
//  Created by Evin Odisho on 12/21/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Takes input as miles and outputs in km
    double miles, km;
    printf("Enter miles value: ");
    scanf("%lf", &miles);
    km = miles * 1.609;
    printf("%lf miles equals %lf Kilometers.\n", miles, km);

    return 0;
}
