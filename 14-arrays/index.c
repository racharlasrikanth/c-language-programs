#include <stdio.h>

/*
    ARRAYS
    ======

    Before using Arrays, you should know the answer of below question
    1. Why we need to use an Array???
    If you don't know the answer for above questions, please stop learning😡😡😡😡, because without knowing answer of above question if you learn arrays don't make sense😀😀😀


    Arrays, used to store the multiple values with same type


    Ex: int someNumbers[] = {1,2,3,4,56,6,7,7,8,8};

    //  we can give size before also, but we cannot change the array size once it created
    Ex: int someNumbers[5];
        someNumbers[0] = 100;
        someNumbers[1] = 200;
        someNumbers[2] = 300;
        someNumbers[3] = 400;
        someNumbers[4] = 500;
*/

int main(){

    int someNumbers[] = {1,2,3,4,5,6,7};

    // printing the values from an array
    printf("The 1st number in array is: %d\n", someNumbers[0]);
    printf("The 2nd number in array is: %d\n", someNumbers[1]);

    // printing all the values from an array
    for(int i=0; i<7; i++){
        printf("The current number is: %d\n", i);
    }

    // changing array values with index
    someNumbers[0] = 100;
    printf("The number is: %d", someNumbers[0]);

    return 0;
}