#include <stdio.h>
#include <stdbool.h>

int main(){
    // With 1 conditional statement
    int feeBalance = 10000;
    if(feeBalance > 0){
        printf("You have a fee Balance of: %i\n", feeBalance);
    }

    // with 2 conditions
    // Check if a number is positive or negative
    int no1 = -89;
    float no2 = 76.87;
    if(no2 < 0){
        printf("%f is a negative number.\n", no2);
    }
    else{
        printf("%f is a positive number.\n", no2); 
    }

    // Check if several numbers are positive or negative
    int number1;
    const float number3 = -8.54;
    number1 = 8;
    if(number1 >= 0){
        printf("%i is a positive number.\n", number1);
    } 
    else{
        printf("%i is a negative number.\n", number1);
    }
    if(number3 >= 0){
        printf("%f is a positive number.\n", number3);
    }
    else{
        printf("%f is a negative number.\n", number3);
    }

    // if...else if
    int day = 5;

    if(day == 1){
        printf("Today is Thursday.\n");
    }
    else if(day == 2){
        printf("Today is Friday.\n");
    }
    else if(day == 3){
        printf("Today is Saturday.\n");
    }
    else if(day == 4){
        printf("Today is Sunday.\n");
    }
    else if(day == 5){
        printf("Today is Monday.\n");
    }
    else if(day == 6){
        printf("Today is Tuesday.\n");
    }
    else if(day == 7){
        printf("Today is Wednesday.\n");
    }
    else{
        printf("No day specified\n");
    }
    // Check which number is greater
     int value1 = 12345;
     int value2 = 23;
     if(value1 == value2){
        printf("%i is equal to %i\n", value1, value2);
     }
     else if(value1 > value2){
        printf("%i is greater than %i\n", value1, value2);
     }
     else{
        printf("%i is greater than %i\n", value2, value1);
     }
}



