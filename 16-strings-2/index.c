#include <stdio.h>

/*
    THIS IS the second way to create a string using each characters

    Ex: char someText[] = {'h', 'e', 'y', '\0'};

    but, after completing string we need to add '\0' to inform the array, string completed
    if you use the 1st way no need to use '\0' it will add automatically, if you use this method we should add '\0' explacitly, in both cases length is same
*/

int main(){

    char someNewText[] = {'h', 'e', 'y', ' ', 'n', 'a', 'v', 'v', 'u', 'g', 'a', '\0'};

    // printing the string
    printf("The current String is: %s\n", someNewText);

    // printing the string length using sizeof() method
    printf("The size of the current String is : %lu\n", sizeof(someNewText));

    return 0;
}