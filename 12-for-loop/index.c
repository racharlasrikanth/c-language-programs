#include<stdio.h>

/*
    FOR LOOP
    ========

    Use for loop, if you know the count before using that code
*/ 

// int main(){

//     int newNumber = 10;

//     for(int i=0; i<=newNumber; i++){
//         printf("The current Number is : %d\n", i);
//     }

//     return 0;
// }



int main(){

    int someNumber = 1;

    for(int i=0; i<=100; i++){
        if(i % 2 == 0){
            printf("%d\t", i);
        }
    }

}