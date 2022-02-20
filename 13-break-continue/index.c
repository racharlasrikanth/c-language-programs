#include<stdio.h>

/*
    BREAK and CONTINUE
    both are very easy, those names indicates their functionalities

    BREAK is used for EXIT the loop based on some conditions
    CONTINUE is used for JUMPING the current line statements based on some conditions
*/ 

// int main(){

//     int newNumber = 1;
//     for(int i=0; i<=20; i++){
//         if(i == 10){
//             break;
//         }else if(i == 7){
//             continue;
//         }else{
//             printf("%d\t", i);
//         }
//     }

//     return 0;
// }



int main(){
    int someNumber = 1;
    while(someNumber <= 10){
        if(someNumber == 7){
            break;
        }else if(someNumber == 2){
            someNumber++;
            continue;
        }else{
            printf("%d\t", someNumber);
        }
        someNumber++;
    }
}