#include <stdio.h>

int main(){
    int matrix[3][4] = {{11, 4, 2, 1}, 
    {31, 6, 8, 5}, 
    {65, 3, 9, 7}};
    for(int i = 0; i <= 2; i++){
        printf("\n");
        for(int j = 0; j <= 3; j++){
            printf("%d\t", matrix[i][j]);
        }
    }
    printf("\n%d\n", matrix[2][2]);
    return 0;
}