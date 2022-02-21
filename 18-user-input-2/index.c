#include <stdio.h>

int main(){

    char userInputString[30];

    printf("Enter your name: \n");

    //  if we use below syntax, it will not consider after space strings
    // scanf("%s", userInputString);

    // 1st way with regular expressions
    // if we use below syntx it will accepts all the chars, which are coming from the user input
    // scanf("%[^\n]%*c", userInputString);

    // 2nd way with new method
    fgets(userInputString, 50, stdin);

    printf("Your Full Name is: %s", userInputString);

    return 0;
}