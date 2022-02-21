#include <stdio.h>

int main(){

    int numbersArray[] = {77, 22, 99, 111, 7, 100, 122};

    int minimumNumber = numbersArray[0];

    // giving length dynamically (Finding the length of the arrray and giving to loop)
    int arrayLength = sizeof(numbersArray)/sizeof(int);

    for(int i=1; i<arrayLength; i++){
        if(minimumNumber > numbersArray[i]){
            minimumNumber = numbersArray[i];
        }
    }

    printf("The mininum number in an Array is: %d\n", minimumNumber);

    return 0;
}