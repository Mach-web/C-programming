#include <stdio.h>

int main(){
    for(int i = 0; i < 20; i++){
        if(i == 10){
            printf("The skipped number is: %d\n", i);
            continue;
        }
        printf("Number: %d\n", i);
    }
    return 0;
}