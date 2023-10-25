// Write a for loop that calculates the sum of all the odd numbers from 1 to 50 (inclusive).

#include <stdio.h>

int main(){
    int i, sum = 0, odd;
    printf("Enter the number to find the sum of odd numbers: \n");
    scanf("%d", &odd);

    for(i = 1; i <= odd; i++){
        if(i % 2 == 1){
            sum += i;
            printf("Odd Number: %d\n", i);
        }
    }
    printf("The sum of odd numbers is: %d", sum);
    return 0;
}
    
