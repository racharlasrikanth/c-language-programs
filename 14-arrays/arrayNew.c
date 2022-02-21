#include <stdio.h>

int main(){

    int number = 20;
    int someNumbers[] = {9, 2, 88, 44, 100, 3, 77, 7};


    // printf("Array Element: %d\n", someNumbers[5]);
    // printf("Array Element: %d\n", someNumbers[1]);

    for(int i=0; i<8; i++){
        printf("Array Element with index %d and value is: %d\n", i, someNumbers[i]);
    }


    return 0;
}