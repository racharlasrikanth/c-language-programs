#include <stdio.h>

/*
    Basic data types
    int     => 4 bytes
    float   => 4 bytes
    double  => 8 bytes
    char    => 1 byte
*/

/*
    Basic format specifiers
    %d  => int
    %f  => float
    %lf => double
    %c  => char
    %s  => strings
*/

int main(){
    int number1 = 100;
    float floatNumber1 = 7.77;
    char charNumber1 = 'n';
    char charNumber2 = 'S';

    printf("The int value is : %d\n", number1);
    printf("The float value is : %f\n", floatNumber1);
    printf("The char value is : %c, %c\n", charNumber1, charNumber2);
    printf("The char values are in ASCII : %d, %d\n", charNumber1, charNumber2);
    return 0;
}