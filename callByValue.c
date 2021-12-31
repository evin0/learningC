#include <stdio.h>

int computeSum(int);


int computeSum(int n)
{
    int sum = 0;
    for ( ; n > 0; n--)
        sum += n;
    return sum;
}

int main(){
    int m = 5;
    printf("\nCompute sum is: %d", computeSum(m));
}