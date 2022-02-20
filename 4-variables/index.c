#include <stdio.h>

// inorder to use variables in C, you must know the format specifiers in C (Which are not available in other languages except in C)

/*
    Format Specifiers
    for int => %d
    for float => %f
    for char => %c
*/

/*
    RULES FOR VARIABLES - WHILE CREATING VARIABLES
    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (such as int) cannot be used as names
*/

int main() {
    int number1 = 100;
    int number2;
    number2 = 200;

    float floatNumber1 = 7.5;

    char charItem1 = 'c';

    // add variables
    int newNumber1 = 100;
    int newNumber2 = 200;
    int result = newNumber1 + newNumber2;


    // multiple variables with same type
    int x = 5, y = 100, z = 200;

    // giving meaning full names
    int minutesPerHour = 60;

    printf("the numbers are : %d, %d\n", number1, number2);
    printf("i am printing float numbers: %f\n", floatNumber1);
    printf("I am printing characters: %c\n", charItem1);
    printf("This is tricky one, printing character ASCII value: %d\n", charItem1);
    printf("The Sum result : %d\n", result);
    printf("The multi SUM is : %d\n", x+y+z);
    printf("There are %d minutes per hour\n", minutesPerHour);
}