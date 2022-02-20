#include<stdio.h>

/*
    Before using the loop, you should know, WHY WE NEED LOOP?
    If you don't know the answer, please stop learning loops😡😡😡

    WHILE_LOOP
    ===========
    ***If you don't the count of the loops, then please use while loop***
    if you don't understand the above statement pls contact srikanth
*/

// int main(){

//     int number1 = 1;

//     while (number1 <= 100)
//     {
//         printf("The number is : %d\n", number1);
//         number1++;
//     }

//     return 0;
// }

// printing all evens numbers upto 5000
int main(){
    int someNumber = 1;
    while(someNumber <= 5000){
        if(someNumber % 2 == 0){
            printf("%d\t", someNumber);
        }
        someNumber++;
    }
}