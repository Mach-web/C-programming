#include <stdio.h>

int main(){
    int i = 0;
    while(i < 1000){
        if(i == 10){
            break;
        }
        printf("%d\n", i);
        i++;
    }
    return 0;
}