#include <stdio.h>

int main(){

    int someNumbers[] = {2, 4, 11, 43, 55, 66, 77, 97, 100, 222, 345, 456};

    int sizeOfTheArray = sizeof(someNumbers)/sizeof(someNumbers[0]);
    // printf("size of the array %d\n", sizeOfTheArray);

    int lower = 0;
    int higher = sizeOfTheArray-1;

    int searchElement = 77;
    int dynamicIndexOfSearchElement = -1;
    while(lower <= higher){
        int middleOfTheElement = (lower + higher)/2;
        // if it is equal to middle number then break there it self
        if(someNumbers[middleOfTheElement] == searchElement){
            dynamicIndexOfSearchElement = middleOfTheElement;
            break;
        }

        // check left side is there or not , If it is not there then lower change to middle + 1
        if(someNumbers[middleOfTheElement] < searchElement){
            lower = middleOfTheElement + 1;
        }else{
            higher = middleOfTheElement - 1;
        }
    }

    printf("The %d element is present at index: %dth place",searchElement, dynamicIndexOfSearchElement);

    return 0;
}