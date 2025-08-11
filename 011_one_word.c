// Exercise 1-12
#include <stdio.h>
#include <stdbool.h>

int main(){
    int str;
    bool flag = true;
    while((str = getchar()) != EOF){
        if(str == ' ' || str == '\n' || str == '\t'){
            if(flag == true){
                putchar('\n');
                flag = false;
            }
        }
        else{
            putchar(str);
            flag = true;
        }
    }
    return 0;
}

/*
You can give input with multiple spaces/tabs in between,
but as soon as you press Enter to move to next line and type new lines
All the input you gave earlier gets processed and printed 1 per line.

But i needed something like, even when i give multiple lines of input
only after that it should give the output.
*/
