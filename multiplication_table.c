#include <stdio.h>

int main(){
    int i, j, multi_value;
    for(i = 1;i <= 10;i++){
        printf("\n");
        for(j = 1;j <= 10;j++){
            multi_value = i * j;
            printf("%d\t", multi_value);
        }
    }
    return 0;
}