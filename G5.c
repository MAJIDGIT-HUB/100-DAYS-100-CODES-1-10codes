// Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;   

    printf("Enter temperature in Celsius: ");   
    scanf("%f", &celsius);                     

    fahrenheit = (celsius * 9 / 5) + 32;       

    printf("Fahrenheit=%.0f", fahrenheit);     

    return 0;                                  
}