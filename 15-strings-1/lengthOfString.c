#include <stdio.h>

int main(){

    char comingName[50];
    int lengthOfTheString = 0;
    int i = 0;

    printf("Please enter a text to find the length: ");
    gets(comingName);

    // finding the length of the string
    while(comingName[i] != '\0'){
        lengthOfTheString++;
        i++;
    }

    printf("The length the '%s' is: '%d'", comingName, lengthOfTheString);

    return 0;
}