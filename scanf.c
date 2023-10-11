#include <stdio.h>

int main(){
    float feePaid;
    int feesPerYear = 500000;
    float feeBal;

    printf("Enter fees paid: \n");
    scanf("%f", &feePaid);
    feeBal = feesPerYear - feePaid;
    printf("You have a fees Balance of: %.2f", feeBal);
}