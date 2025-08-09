// To signal EOF -- Ctrl+D(for linux) & Ctrl+Z(in Windows)
// EOF - (End of File) is a condition not a char & it Signals that no more input can be read from a file/stream.
#include <stdio.h>

int main(){
/*
    printf("Enter some txt.\n");
    char str = getchar();
    while(str != EOF){    
        putchar(str);
        str = getchar();
    }
    printf("\n");
*/
    // Exercise 1-6
    int c;
    while ((c = getchar()) != EOF){
        printf("%d", c != EOF);
    }
    printf("%d\n", c != EOF);

    // Exercise 1-7
    printf("Value of EOF is %d\n", EOF);

    return 0;
}

/*
when getchar() is called and we enter multiple characters,
it all goes to a "input buffer" and then when we press EOF i.e. Ctrl+D/Ctrl+Z
it sends everything form input buffer to the program including EOF signal. 
Now program takes 1 char at a time and checks if char != EOF 
if not then because of the loop it keeps taking 1 char until it gets EOF.
*/
