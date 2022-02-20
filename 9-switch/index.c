#include<stdio.h>

/*
    The break statement breaks out of the switch block and stops the execution
    The default statement is optional, and specifies some code to run if there is no case match
*/

int main(){

    int currentDayInNumber = 10;

    switch (currentDayInNumber)
    {
    case 1:
        printf("Heyy, Monday");
        break;

    case 2:
        printf("Heyy, Tuesday");
        break;

    case 3:
        printf("Heyy, Wednesday");
        break;

    case 4:
        printf("Heyy, Thursday");
        break;

    case 5:
        printf("Heyy, Friday");
        break;

    case 6:
        printf("Heyy, Saturday");
        break;

    case 7:
        printf("Heyy, Sunday");
        break;
    
    default:
        printf("Please enter a proper day number!!!)--");
        break;
    }

    return 0;
}