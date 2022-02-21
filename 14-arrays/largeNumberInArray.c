#include <stdio.h>

int main(){

    int numbersArray[] = {88, 29, 55, 99, 100, 23, 7};

    int maxNumber = numbersArray[0];

    printf("size array: %lu\n", sizeof(numbersArray)/sizeof(int));

    for(int i=1; i<7; i++){
        if(maxNumber < numbersArray[i]){
            maxNumber = numbersArray[i];
        }
    }

    printf("The Max number in given array is: %d\n", maxNumber);

    return 0;
}