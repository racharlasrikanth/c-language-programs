#include <stdio.h>

int main() {

    int someNumbers[] = {4, 7, 10, 44, 7, 2, 10, -1};

    // assuming 1st numbers in small number i.e: 4
    int smallNumber = someNumbers[0];

    for(int i=1; i<8; i++){
        if(smallNumber > someNumbers[i]){  
            smallNumber = someNumbers[i];
        }
    }
    printf("The small number in Array is: %d\n", smallNumber);

    return 0;
}