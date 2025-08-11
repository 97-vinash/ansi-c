#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int str, count = 0;
    int length[21] = {0};
    bool flag = true;
    while((str = getchar()) != EOF){
        if(str != ' ' && str != '\t' && str != '\n'){
            flag = true;
            ++count;
        }
        else if(flag == false) continue;
        else {
            ++length[count];
            // printf("%d\n", count);
            count = 0;
            flag = false;
        }
    }

    for(int i = 1;i <= 20;i++){
        printf("%2d character words  -->  %d\n", i, length[i]);
    }

    return 0;
}
