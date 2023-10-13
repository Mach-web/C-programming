#include <stdio.h>

int main(){
    int first, second, fibo, next, i;
    first = 0;
    second = 1;
    fibo = 0;
    printf("Enter the fibonacci number to be found: \n");
    scanf("%i", &i);

    while(i > fibo){
        next = first + second;
        first = second;
        second = next;
        fibo ++;
    }
    printf("The fibonacci sequence of %d is %d", i, first);
    return 0;
}