#include <stdio.h>

int main(){
int myNumber[]={100, 10, 25, 4, 428, 8, 56, 17, 33, 11, 29};
int i = 0, max = myNumber[0];
while (myNumber[i])
{
    /* code */
    if(max < myNumber[i]){
        max = myNumber[i];
    }
    i++;
}
printf("The maximum number is: %d\n", max);
return 0;
}