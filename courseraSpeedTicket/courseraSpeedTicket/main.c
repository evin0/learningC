//
//  main.c
//  courseraSpeedTicket
//
//  Created by Evin Odisho on 12/24/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    // Takes in speed, and determines if ticket is issued or not
    // Validates user input
    double speed;
    printf("Please enter speed (in MPH): ");
    scanf("%lf", &speed);
    // Input check
    while (speed < 1 || speed > 100){
        printf("Enter valid speed (between 1 and 100): ");
        scanf("%lf", &speed);
    }
    if (speed >= 65.00)
        printf("You get a ticket!\n");
    else
        printf("No ticket for you!\n");
    return 0;
}

