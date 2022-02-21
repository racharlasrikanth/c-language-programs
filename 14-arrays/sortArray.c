#include <stdio.h>

int main(){

    int numbersArray[] = {5, 7, 11, 3, 9, 20, 11};

    int sizeofArray = sizeof(numbersArray)/sizeof(int);

    printf("The given array is: ");
    for(int i=0; i<sizeofArray; i++){
        printf("%d, ", numbersArray[i]);
    }
    printf("\n");

    for(int i=0; i<sizeofArray; i++){
        for(int j=i+1; j<sizeofArray; j++){
            if(numbersArray[i] > numbersArray[j]){
                int temp = numbersArray[i];
                numbersArray[i] = numbersArray[j];
                numbersArray[j] = temp;
            }
        }
    }

    printf("The sorted array is: ");
    for(int i=0; i<sizeofArray; i++){
        printf("%d, ", numbersArray[i]);
    }
    printf("\n");

    return 0;
}