#include <stdio.h>

int main(){
    int p, r, t, SI;
     
    printf("Enter principle amount: ");
    scanf("%d", &p);
    printf("Enter rate: ");
    scanf("%d", &r);
    printf("Enter time: ");
    scanf("%d", &t);
    SI = (p*r*t)/100;
    printf("Simple interest is: %d", SI);

    return 0;
}