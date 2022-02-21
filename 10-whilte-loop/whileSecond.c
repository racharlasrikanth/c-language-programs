#include <stdio.h>

int main(){

    int number = 10;

    // while(number >= 1){
    //     printf("%d\t", number);
    //     number--;
    // }

    do{
        printf("%d\t", number);
        number--;
    }while(number >= 1);

    return 0;
}