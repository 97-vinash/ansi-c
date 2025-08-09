#include <stdio.h>

int main(){
/* 
    long nc = 0;
    while(getchar() != EOF){
        nc++;
    }
    printf("\nThis input has total of %ld\n characters, including the spaces.\n", nc);
*/
    
    double nc2;
    for(nc2 = 0.0; getchar() != EOF; ++nc2);
    printf("\n\nThis input has total of %.0lf characters, including the spaces.\n", nc2);

    return 0;
}
