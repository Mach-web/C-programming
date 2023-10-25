#include <stdio.h>

int main(){
    int i, j, multi_value;
    
    printf("Enter the number for multiplication table: ");
    scanf("%d", &multi_value);

    for(i = 1;i <= multi_value;i++){
        // Skip a line for every new loop
        printf("\n");
        for(j = 1;j <= multi_value;j++){
            printf("%d\t", i * j);
        }
    }
    return 0;
}