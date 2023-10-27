#include <stdio.h>

int main(){
int myNumber[]={10, 10, 25, 4, 4, -8, 56, 17, 63, 11, 29};
int i = 0, min = myNumber[0], max = myNumber[0]; 
while (myNumber[i])
{
    /* code */
    if(myNumber[i] < min){
        min = myNumber[i];
    }
    if(myNumber[i] > max){
        max = myNumber[i];
    }
    i++;
}
printf("The minimum number is: %d\n", min);
printf(" The maximum number is: %d\n", max);
return 0;
}