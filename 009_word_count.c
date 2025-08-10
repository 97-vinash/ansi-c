#include <stdio.h>
#include <stdbool.h>

int main(){

    int str, count = 0;
    bool flag = false;
    while((str = getchar()) != EOF){
        if(str == ' ' || str == '\n' || str == '\t'){
            if(flag == false){
                ++count;
                flag = true;
            }
            else if(flag == true){
                continue;
            }
        }
        else {
            flag = false;
        }
    }
    printf("\nThere are total of %d words\n", count); 

    return 0;
}

/*
You can give any number of spaces/tabs/newlines it works correctly. <3

After giving the input press ENTER to also include last word
and then press --> CTRL+D/CTRL+Z to end.
*/
