#include <stdio.h>

int main(){
    
    int c, lc = 0;
    while((c = getchar()) != EOF){
        if(c == '\n'){
            ++lc;
        }
    }
    printf("\nThere are a total of %d lines in this input.\n", lc);

    return 0;
}

/*
press ENTER after each line to go to next line, and also after the last line,
and then press EOF i.e. CTRL+D / CTRL+Z to end the input.
*/
