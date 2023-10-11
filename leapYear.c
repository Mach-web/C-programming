#include <stdio.h>
#include <stdbool.h>

int main(){
bool leapYear;

int year;
printf("Enter a year:\n");
scanf("%d", &year);

if(year % 4 == 0){
    if(year % 100 == 0){
        if(year % 400 == 0){
            leapYear = true;
        }
        else{
            leapYear = false;
        }
    }
    else{
        leapYear = true;
    }
}
else{
    leapYear = false;
}

if(leapYear){
    printf("%d is a leap year\n", year);
}
else{
    printf("%d is not a leap year\n", year);
}
}


