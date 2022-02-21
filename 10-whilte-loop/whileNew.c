#include <stdio.h>

int main(){

    int someNumber = 100;

    while(someNumber >= 1){
        // if(someNumber % 2 == 0){
        //     printf("%d\t", someNumber);
        // }

        if(someNumber % 2 == 0)
            printf("%d\t", someNumber);

            
        someNumber--;
    }

    return 0;
}