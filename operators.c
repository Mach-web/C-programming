#include <stdio.h>

int main(){
    int number = 32;
    number ++;
    printf("After  increment(++) the new value is %d\n", number);
    /*Modulus - Similar to the remainder*/
    int mod = number % 7;
    printf("The modulus is %d\n", mod);
    
    // logical operations
    number &= 0;
    printf("The logical AND result is %d\n", number);
    number |= 0;
    printf("The logical OR result is %d\n", number);
    return 0;
}