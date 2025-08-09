// Exercise 1-9
#include <stdio.h>

int main(){

    int str, temp_str;
    while((str = getchar()) != EOF){
        if(str == ' ' && temp_str == str){
            continue;
        }
        else if(str == ' '){
            temp_str = str;
            putchar(str);
        }
        else{
            temp_str = str;
            putchar(str);
        }
    }
    printf("\n");

    return 0;
}

/*
give the input with multiple spaces in between --> Press ENTER to get the output and --> CTRL+D/CTRL+Z to exit.
*/
