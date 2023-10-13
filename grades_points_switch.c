#include <stdio.h>
#include <stdlib.h>

int main()
{
int points;
printf("Enter points:\n");
scanf("%d",&points);

switch(points){
case 12:
    printf("the grade is an A.\n");
    break;
case 11:
    printf("the grade is a B.\n");
    break;
case 10:
    printf("the grade is a C.\n");
    break;
case 9:
    printf("the grade is a D.\n");
    break;
case 8:
    printf("the grade is an E.\n");
    break;
case 7:
    printf("the grade is an F.\n");
    break;
default:
    printf("the grade is invalid.\n");
    break;
}
return 0;
}