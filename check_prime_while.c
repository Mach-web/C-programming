#include <stdio.h>
#include <stdbool.h>

int main(){
    int i = 2, number;
    bool prime = true;
    printf("Enter a number to check if its prime: ");
    scanf("%d", &number);
if(number == 1){
    prime = false;
}
while(i < number){
    if(number % i == 0){
        prime = false;
        break;
    }
    i++;
    }
if(prime){
    printf("\n%d is a prime number.", number);
}
else{
    printf("\n%d is not a prime number.", number);
}
return 0;
}
