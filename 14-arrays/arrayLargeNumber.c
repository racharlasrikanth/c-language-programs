#include <stdio.h>

int main(){

    int someNumbers[] = {9, 2, 99, 199, 233, 6, 77};

// assume largenumber is first element in array
    int largeNumber = someNumbers[0];

    for(int i=1; i<7; i++){
        if(largeNumber < someNumbers[i]){
            largeNumber = someNumbers[i];
        }
    }

    printf("The largeNumber in Array is: %d\n", largeNumber);

    return 0;
}