#include <stdio.h>

int main(){

    // taking input from the user for length of the array
    int lengthOfTheArray;
    printf("Please enter the length of the Array: ");
    scanf("%d", &lengthOfTheArray);

    // creating an array based on given length
    int numbersArray[lengthOfTheArray];

    // asking entering the values to the array from the user
    for(int i=0; i<lengthOfTheArray; i++){
        int givenNumber;
        printf("Please enter the %d th element: ", i);
        scanf("%d", &givenNumber);
        numbersArray[i] = givenNumber;
    }

    // search for given element
    int searchGivenElement;
    printf("Enter the number to search in Array: ");
    scanf("%d", &searchGivenElement);

    // printing the given array
    printf("The given Array is: ");
    for(int i=0; i<lengthOfTheArray; i++){
        printf("%d, ", numbersArray[i]);
    }

    // linear search (searching element for searchGivenElement)
    // if it is found print the index of that element
    // if it is not found print the -1
    printf("\n");
    int gettingTheIndexOfSearchedElement = -1;
    for(int i=0; i<lengthOfTheArray; i++){
        if(numbersArray[i] == searchGivenElement){
            gettingTheIndexOfSearchedElement = i;
            break;
        }else{
            gettingTheIndexOfSearchedElement = -1;
        }
    }
    (gettingTheIndexOfSearchedElement != -1) ? printf("The give number is %d and index is: %d", searchGivenElement, gettingTheIndexOfSearchedElement) : printf("THE GIVEN ELEMENT %d is NOT FOUND", searchGivenElement);

    return 0;
}