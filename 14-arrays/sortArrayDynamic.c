#include <stdio.h>

int main(){

    // taking input from the user for length of the array
    int dynamicLength;
    printf("Enter the size of an Array: ");
    scanf("%d", &dynamicLength);
    
    // array creation based on userinput length
    int numbersArray[dynamicLength];

    // adding values in an array, with user input
    for(int i=0; i<dynamicLength; i++){
        int givenValue;
        printf("Enter the %d number: ", i);
        scanf("%d", &givenValue);
        numbersArray[i] = givenValue;
    }

    // printing the user given array
    printf("The given Array is: ");
    for(int i=0; i<dynamicLength; i++){
        printf("%d, ", numbersArray[i]);
    }
    printf("\n");

    // sorting given array
    for(int i=0; i<dynamicLength; i++){
        for(int j=i+1; j<dynamicLength; j++){
            if(numbersArray[i] > numbersArray[j]){
                int temp = numbersArray[i];
                numbersArray[i] = numbersArray[j];
                numbersArray[j] = temp;
            }
        }
    }

    // printing the user given array
    printf("The sorted Array is: ");
    for(int i=0; i<dynamicLength; i++){
        printf("%d, ", numbersArray[i]);
    }
    printf("\n");

    return 0;
}