#include <stdio.h>

/*
    CONSTANT means, if we declare a variable with CONSTANT, other persons cannot overrider that variable, It only for READ

    Ex: const float PI = 3.14;
    Ex: const int number1 = 100;
    number1 = 200; // It will give error message, because it declares const, we cannot change the const variable
*/

/*
    It is better practice for constants, While creating constants variable should have all capital letters for user understanding
    
    Ex: const int BIRTHYEAR = 2003;
*/

int main(){
    const int dailyHours = 24;
    
    // dailyHours = 100; // assignment of read-only variable 'dailyHours'

    const int BIRTHYEAR = 2003;
    
    printf("There are daily %d hours only\n", dailyHours);
    printf("Your birth year : %d\n", BIRTHYEAR);
    return 0;
}