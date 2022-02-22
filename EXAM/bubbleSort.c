#include <stdio.h>

int main(){

    int someNumbers[] = {3, 2,55, 33, 66, 77, 22, 100, 55};

    int sizeOfArray = sizeof(someNumbers)/sizeof(someNumbers[0]);

    for(int i=0; i<sizeOfArray-1; i++){
        for(int j=0; j<sizeOfArray-1-i; j++){
            if(someNumbers[j] > someNumbers[j+1]){
                int temp = someNumbers[j];
                someNumbers[j] = someNumbers[j+1];
                someNumbers[j+1] = temp;
            }
        }
    }

    printf("Printing sorted array: ");
    for(int i=0; i<sizeOfArray; i++){
        printf("%d, ", someNumbers[i]);
    }

    return 0;
}