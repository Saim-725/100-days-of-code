#include <stdio.h>

int main(){
    float r, Area;
    printf("Enter radius of the circle: ");
    scanf("%f", &r);
    Area = (float)3.14*r*r;
    printf("Area of the circle is%f\n", Area); 

    return 0;
}