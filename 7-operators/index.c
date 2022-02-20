#include <stdio.h>

/*
    OPERATORS
    ==========
    + Operator to add together two values

    Diffrent types of operators
    ============================
    Arithmetic operators    =>  +, -, *, /, %, ++, --, 
    Assignment operators    =>  =, +=, -=, *=, /=, %=, &=, |=, ^=
    Comparison operators    => ==, !=, >, <, >=, <=
    Logical operators       => &&, ||, !
    Size of operators       => sizeof()
*/

int main(){
    int newNumber = 100 + 250;
    printf("The number is : %d\n", newNumber);

    int number1 = 100;
    int number2 = number1 + 100;
    int result = number2 + number1;
    printf("The results are : %d\n", result);


    int newNumberNew = 1;
    float newFloat = 7.77;
    double newDoubleNumber = 100.00;
    char newChar = 'N';

    printf("The int size is : %lu byte(s)\n", sizeof(newNumberNew));
    printf("The float size is : %lu byte(s)\n", sizeof(newFloat));
    printf("The double size is : %lu byte(s)\n", sizeof(newDoubleNumber));
    printf("The character size is : %lu byte(s)\n", sizeof(newChar));

    return 0;
}

/*
    Note that we use the %lu format specifer to print the result, instead of %d. It is because the compiler expects the sizeof operator to return a long unsigned int (%lu), instead of int (%d). On some computers it might work with %d, but it is safer to use %lu.
*/