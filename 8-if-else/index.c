#include<stdio.h>

/*
    IF ELSE used for redning(Output) the data(required values || some text) based on some conditions

    if(condition){
        ...logic...
    }

    if(condition){
        if(condition){
            ...logic...
        }else if(condition){
            ...logic...
        }else{
            ...logic...
        }
    }else{
        if(condition){
            ...logic...
        }else{
            ...logic...
        }
    }
*/

int main(){
    int personAge = 18;

    // checking wheather the person is allowed to vote or not?

    if(personAge < 18){
        printf("Heyy you are kid, Please wait for few years...🙂🙂🙂");
    }else if(personAge >= 70){
        printf("Heyy, you are too old, please go and take rest...😴😴😴");
    }else{
        printf("Heyy, you are the correct person to vote...😀😃😊");
    }

    return 0;
}