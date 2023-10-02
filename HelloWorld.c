#include <stdio.h>
#include <stdbool.h>

int main(){
    // datatypes
    int number = 12;
    float floatno = 12.458;
    double doubleno = 12.458;
    char letter  = 'A';
    char word[] = "qwerty";
    bool isFun = true;

    printf("%i is a number \n\"%c\" is a character \n\"%s\" is a string\n%f is a float\n%lf is a double\n%d is a boolean\n"
    , number, letter, word, floatno, doubleno, isFun);
    printf("Boolean evaluation results: %d\n", 10<7);
    /* Implicit conversion*/
    int myInt = 9.9973;
    printf("\nThe integer number is %d\n", myInt);
    float myFloat = 9.9973;
    printf("The float number is %f\n", myFloat);

    // Explicit conversion
    float sum = 5/2;
    printf("The value without explicit conversion %f\n", sum);
    float summation = (float) 5/2;
    printf("After explicit conversion: %f\n", summation);

    /*Constants*/
    const int no = 15;
    // no = 17;
    printf("The number is %d\n", no);

    return 0;
}
