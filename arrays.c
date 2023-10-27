#include <stdio.h>

int main(){
int myNumber[]={25,50,75,100},i;
myNumber[1] = 60;
for(i=0; i <= 3;i++){
    printf("%d\n",myNumber[i]);
}
    return 0;
}