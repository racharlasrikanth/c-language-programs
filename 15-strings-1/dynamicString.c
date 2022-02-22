#include <stdio.h>

int main(){

    char comingName[50];

    printf("Enter the name: ");
    gets(comingName);

    printf("Hello, %s", comingName);

    return 0;
}