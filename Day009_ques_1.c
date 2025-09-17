#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, root1, root2;
    printf("Enter the coefficients of  the quadractic equation: ");
    scanf("%f %f %f", &a, &b, &c);
    float d = b*b - 4*a*c;
        
    if(d > 0){
        printf("The roots are real and different\n");
        root1 = (-b + sqrt(d))/(2*a);
        printf("%f\n", root1);
        root2 = (-b - sqrt(d))/(2*a);
        printf("%f\n", root2);
    }
    else if(d == 0){
        printf("The roots are real and equal\n");
        printf("root1 = root2\n");
        root1 = (-b/(2*a));
        printf("%f\n", root1);
    }
    else if (d < 0){
        printf("The roots are complex\n");
    }
    return 0;
}