#include <stdio.h>

int main(){

    char comingString[50];
    int lengthOfGivenString = 0;
    int increment = 0;

    printf("Please enter a String: ");
    gets(comingString);
    printf("Printing given String: %s\n", comingString);

    // first find the length of the string
    while(comingString[increment] != '\0'){
        lengthOfGivenString++;
        increment++;
    }
    printf("Length of given String: %d\n", lengthOfGivenString);

    // reverse the given string
    int i = 0;
    int j = lengthOfGivenString-1;
    while(i < j){

        // swapping
        char temp = comingString[i];
        comingString[i] = comingString[j];
        comingString[j] = temp;

        i++;
        j--;
    }

    printf("Reversed String: '%s'", comingString);

    return 0;
}