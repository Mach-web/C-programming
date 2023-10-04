#include <stdio.h>

int main(){
    // With 1 conditional statement
    int number;
    number = 10;
    if(number > 0){
        printf("Number is positive.\n");
    }

    // 2 conditions
    float feeBal;
    feeBal = 0;
    if(feeBal > 0){
        printf("You have a fee Balance of %.2f\n", feeBal);
    }
    else{
        printf("You have no fee Balance.\n");
    }

    // More than 2 conditions
    int feeBalance = 250000;
    if(feeBalance >= 20000){
        printf("You have a fee balance of greater than 20000\n");
    }
    else if(feeBalance >= 10000){
        printf("You have a fee balance of greater than 10000\n");
    }
    else if(feeBalance >= 0){
        printf("You have a fee balance of less than 10000\n");
    }
    else{
        printf("You have no fee balance\n");
    }
}



