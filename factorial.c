#include <stdio.h>

int main(){
    long int factorial = 1, i, factorial_number;
    printf("Enter the number to find the factorial: \n");
    scanf("%d", &factorial_number);
    
    for(i = factorial_number; i > 0; i--){
        factorial *= i;
    }
    printf("The factorial of %d is %d.\n", factorial_number, factorial);
    return 0;
}