//
//  main.c
//  marathonDistance
//
//  Created by Evin Odisho on 12/21/21.
//

#include <stdio.h>

int main(void) {
    // Converts marathon distance into km
    // A marathon is 26.2 Miles
    double marMiles = 26.2, convMult = 1.60934, marKm;
    marKm = marMiles * convMult;
    printf("KM in a marathon is equal to %lf miles times %lf KM\nThis makes one marathon equal to %lf Kilometers in length.\n", marMiles, convMult, marKm);    
    return 0;
}
