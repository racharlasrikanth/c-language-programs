#include<stdio.h>


/*
    DO WHILE LOOP
    =============
    Please listen while explaining below code, so that you will understand why we need WHILE_LOOP && DO_WHILE_LOOP
*/

int main(){

    int someNumber = 1;

    do
    {
        printf("I am executing, without checking condition %d\n", someNumber);
        someNumber++;
    } while (someNumber<-100);
    

    return 0;
}