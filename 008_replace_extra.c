// Exercise 1-10
#include <stdio.h>

int main(){
    int str;
    while((str = getchar()) != EOF){
        if(str == '\t'){
            putchar('\\');
            putchar('t');
        }
        else if(str == '\b'){
            putchar('\\');
            putchar('b');
        }
        else if(str == '\\'){
            putchar('\\');
            putchar('\\');
        }
        else putchar(str);
    }

    return 0;
}

/*
This program will not process the backspace, the terminal preprocesses the \b backspace and,
filters it out before it reaches to the program.
Even in raw mode (stty raw -echo) the terminal behaves weirdly and,
it just keeps taking input and it shows the changes directly live in the input itself. 
I wasn't able to exit the input mode either -- had to close the whole terminal.
*/
