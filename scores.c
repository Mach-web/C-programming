#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
int scores;
printf("Enter your scores\n");
scanf("%d", &scores);

if(scores >= 90 && scores <= 100){
    printf("The score is A");
}
else if(scores >= 80 && scores <= 89){
    printf("The score is B");

}
else if(scores >= 70 && scores <= 79){
    printf("The score is C");
}
else if(scores >= 60 && scores <= 69){
    printf("The score is D");
}
else if(scores <=60 && scores >= 0){
    printf("The score is F");
}
else{
    printf("Invalid score");
}
return 0;
}
