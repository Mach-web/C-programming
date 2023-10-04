#include <stdio.h>
#include <stdbool.h>

int main(){
    int number = 32;
    // number = number + 1
    // number += 24;
    // number *= 3;
    number ++;
    printf("After  increment(++) the new value is %d\n", number);
    // number = number - 1
    number --;
    printf("After  decrement(--) the new value is %d\n", number);
    /*Modulus - Similar to the remainder*/
    int mod = number % 7;
    printf("The modulus is %d\n", mod);
    
    // logical operations
    bool myBool1 = 1;
    bool myBool2 = 0;
    bool myBool3 = 1;
    bool myBool4 = 0;
    bool result = myBool1 && myBool2;
    printf("The results of 1 AND 0 is: %d\n", result);
    bool result1 = myBool1 && myBool3;
    printf("The results of 1 AND 1 is: %d\n", result1);
    bool result2 = myBool1 || myBool2;
    printf("The results of 1 OR 0 is: %d\n", result2);
    bool result3 = myBool2 || myBool4;
    printf("The results of 0 OR 0 is: %d\n", result3);
    printf("The NOT of 1 is: %d\n", !myBool1);
    myBool2 &= myBool3;
    // myBool2 = myBool2 && myBool3
    printf("The results of 0 AND 1 is: %d\n", myBool2);

    /*Comparison*/
    int no1 = 5;
    int no2 = 10;
    int no3 = 5;
    printf("Comparison 5 == 10 is: %d\n", no1 == no2);
    printf("Comparison 5 != 10 is: %d\n", no1 != no2);
    printf("Is 5 > 10: %d\n", no1 > no2);
    printf("Is 5 >= 5: %d\n", no1 >= no3);

    // sizeof
    printf("The Bytes of number is: %lu\n", sizeof(number));
    printf("The Bytes of myBool1 is: %lu\n", sizeof(myBool1));

    // Right shift
     number >>= 1;
    printf("The right shift: %d\n", number);
    number &= 0;
    printf("The logical AND result is %d\n", number);
    number |= 1;
    printf("The logical OR result is %d\n", number);
    return 0;
}