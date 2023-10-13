#include <stdio.h>
#include <stdbool.h>

int main(){
    int i = 2, number;
    bool prime;
    printf("Enter a number to check if its prime: ");
    scanf("%d", &number);

while(number >= i){
    if(number % i != 0){
        prime = true;
        break;
    }
    else{
        if(number == i){
            prime = true;
        }
        else{
            prime = false;
        }
    }
    i++;
}
return 0;
}