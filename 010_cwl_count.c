#include <stdio.h>
#include <stdbool.h>

int main(){

    int str, char_count = 0, word_count = 0, line_count = 0;
    bool flag = true;
    while((str = getchar()) != EOF){
        ++char_count;
        if(str == ' ' || str == '\n' || str == '\t'){
            if(flag == true){
                ++word_count;
                flag = false;
            }
            if(str == '\n') ++line_count;
        }
        else flag = true;
    }
    printf("\nThere are total of %d characters, %d words, %d lines in this input.\n", char_count, word_count, line_count);

    return 0;
}

/*
This program tells you total number of characters, words, lines in your input
including spaces/tabs/newline-characters.
After giving the input press ENTER to include last-word and last line
Then press CTRL+D/CTRL+Z to end.
*/
