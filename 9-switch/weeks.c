#include <stdio.h>

int main(){

    int currentNumber = 100;

    switch(currentNumber){
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("tuesday");
            break;

        default:
            printf("Please enter a proper number");
            break;
    }

    return 0;
}