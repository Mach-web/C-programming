#include <stdio.h>
/*
Write a Python program that asks the user for a start and end number, 
and then finds and prints the first even number within that range. 
If there are no even numbers in the specified range, indicate that.
*/
int main(){
    // ask user for start and end number
    int start, end;
    printf("Enter the start number: \n");
    scanf("%d", &start);
    printf("Enter the end number: \n");
    scanf("%d", &end);

    // Find and print even number within that range
    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
            printf("The first even number is: %d\n", i);
            break;
        }
        if(i == end){
            printf("There is no even number within that range.");
        }
    }
    return 0;
}