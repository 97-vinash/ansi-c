// Exercise 1-14
#include <stdio.h>

int main(){

    int str, max_ascii = 0;
    int length[95] = {0};
    while((str = getchar()) != EOF){
        int ascii = str;
        ++length[ascii-32];
        if(max_ascii < ascii) max_ascii = ascii;
    }
    
    for(int i = 32;i <= max_ascii;i++){
        if(length[i-32] == 0) continue;
        else {
            printf("%c: ", i);
            for(int j = 0;j < length[i-32];j++){
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}

/*
In this program you can input: a - z, A - Z, 0 - 9
and all the special characters like `-=[];',./\~!@#$%^&*()_+{}|:"<>?

It only outputs the frequency of a char if it's present in the input,
it will not show all the letters and chars with 0 frequency making it clean.
I don't think it's the most efficient way, BUT GUESS WHAT.... it works!!!

After giving input press CTRL+D/CTRL+Z
*/
