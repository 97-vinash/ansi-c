// Exercise 1-8
#include <stdio.h>

int main(){
    
    int str, blanks = 0, tabs = 0, lines = 0;
    while((str = getchar()) != EOF){
        if(str == ' ')
            ++blanks;
        else if(str == '\t')
            ++tabs;
        else if(str == '\n')
            ++lines;
    }
    printf("\nIn this input there are total of:\n%4d blank spaces\n%4d tabs\n%4d lines\n", blanks, tabs, lines);

    return 0;
}
