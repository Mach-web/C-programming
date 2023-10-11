#include <stdio.h>

int main(){
    int time;
    printf("Enter time: \n");
    scanf("%d", &time);
    (time >= 18)?printf("Good Evening.\n"):
    (time >= 12)?printf("Good Afternoon\n"):
    printf("Good Morning.\n");
    return 0;
}