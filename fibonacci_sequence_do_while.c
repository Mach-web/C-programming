#include <stdio.h>

int main(){
    int first, second, fibbo_number, fibo, i;
    first = 0;
    second = 1;
    // Use fibo variable to check if loop has been completed
    fibo = 0;
    // i is the fibbonacci number to be checked
    printf("Enter the fibonacci number to be found: \n");
    scanf("%d", &i);

    do{
        fibo++;
        fibbo_number = first;
        first = second;
        second += fibbo_number;
    }
    while(i > fibo);
    printf("The fibonacci sequence of %d is %d\n", i, fibbo_number);
    return 0;
}