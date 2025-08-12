// Exercise 1-13
#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int str, count = 0, max_count = 0;
    int length[21] = {0};
    bool flag = true;
    while((str = getchar()) != EOF){
        if(str != ' ' && str != '\t' && str != '\n'){
            flag = true;
            ++count;
        }
        else if(flag == false) continue;
        else {
            if(max_count < count) max_count = count;
            ++length[count];
            count = 0;
            flag = false;
        }
    }

    for(int i = 1;i <= max_count;i++){
        if(length[i] == 0) continue;
        else {
            printf("%2d: ", i);
            for(int j = 1;j <= length[i];j++){
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}

/*
One thing i added was to only limit the count to the maximum number of char,
i.e. any char lets say there are 1,2,3,4 cahr words.
if there is no 3 char words but the max char word is 4,
then 3 will not even be shown, and if 4 is max char word in the input/file,
so after that if all are 0, means no words with 5,6,7..chars,
then last shows will only be till 4 char words.

It took some tweaking to make it, and the code maybe a little complicated than it had to,
but this is the way i figured out by breaking it into smaller parts and adding everything together.
*/
