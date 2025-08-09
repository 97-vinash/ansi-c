#include <stdio.h>

int main(){
    float fahr, celsius;
    float lower = 0.0, upper = 300.0, step = 20.0;
    

    // Exercise 1-3
    fahr = lower;
    printf("Fahr to Celsius\n");
    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("\n");


    // Exercise 1-4
    celsius = lower;
    printf("Celsius to Fahr\n");
    while(celsius <= upper){
        fahr = (celsius * (9.0/5.0)) + 32;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius += step;
    }
    printf("\n");


    // Exercise 1-5 
    printf("Fahr to Celsius -- high to low\n");
    for(fahr = upper; fahr >= lower; fahr -= 20){
        printf("%3.0f\t%6.1f\n", fahr, ((5.0/9.0)*(fahr-32.0)));
    }
    printf("\n");

    return 0;
}
