#include <stdio.h>

/*
    USER INPUT is nothing but, we will take input from the end-user || programmer || user

    USER INPUT = scanf();
*/

int main(){

    // create a variable, and take input from the user and assign it.
    int userInputNumber;

    // ask the user to enter a number
    printf("Enter a number to display the table: \n");

    // get the number and save it in userInputNumber variable
    scanf("%d", &userInputNumber);

    // display the table with the user input
    for(int i=1; i<=10; i++){
        printf("%d * %d = %d\n", userInputNumber, i, userInputNumber*i);
    }

    return 0;
}