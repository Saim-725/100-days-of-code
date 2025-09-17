#include <stdio.h>

int main(){
    int C;
    float F;
    printf("Temperature in Celsius is: ");
    scanf("%d", &C);
     F = (float)(9.0/5.0 * C)+32;
    printf("\nTemperature in fahrenheit is: %f\n", F);
   

    return 0;
}