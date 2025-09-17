
#include <stdio.h>

int main(){
    int a, b, c, d, e;
    float f;
    printf("The value of a is: ");
    scanf("%d", &a);
    printf("The vale of b is: ");
    scanf("%d", &b);
    c = a + b;
    printf("The sum is %d\n", c);
    d = a - b;
    printf("The subtraction is %d\n", d);
    e = a*b;
    printf("The multiplication is %d\n", e);
    f = (float) a/b;
    printf("The division is %f\n", f);
        return 0;
}