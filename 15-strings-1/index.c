#include <stdio.h>

/*
    STRINGS

    ==> Strings are used to store string values ex: hello world
    ==> Aprat from C language, in other languages we have string type to declare string values, but in C language we have only arrays to create strings with char type
    ==> %s is the format specifier for printing the strings

    Ex: char someText[] = "Heyy how are you";
*/

int main(){

    char someText[] = "hey navvuga";

    // printing the string (use format specifer to tell we are working with strings %s)
    printf("The current Text is: %s\n", someText);

    // printing the each character in string
    printf("The 1st character in String is: %c\n", someText[0]);

    // if you want to change the string letters by using index
    someText[0] = 'N';
    printf("After chaning the 1st character in String is: %c\n", someText[0]);
    printf("After chaning the current String is : %s\n", someText);

    // printing the size of a string using sizeof() method
    printf("the current string length is: %lu\n", sizeof(someText));

    return 0;
}