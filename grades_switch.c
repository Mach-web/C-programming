#include <stdio.h>

int main(){
    char grade;
    printf("Enter  your grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
        printf("You have 12 points");
        break;
        case 'B':
        printf("You have 11 points");
        break;
        case 'C':
        printf("You have 10 points");
        break;
        case 'D':
        printf("You have 9 points");
        break;
        default:
        printf("Invalid grade");
        break;
    }
    return 0;
    }