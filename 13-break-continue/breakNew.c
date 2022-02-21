#include <stdio.h>

int main(){

    // break and continue

    int number = 10;

    for(int i=0; i<10; i++){
        
        if(i == 2){
            continue;
        }

        printf("%d\t", i);


        // if(i == 2){
        //     break;
        // }
    }

    return 0;
}