#include <stdio.h>

int main(){
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    
    x = x + 1;
    y = x - 1;
    x = y + 1;
    
    printf("Now numbers are reveersed: %d %d", x, y);

    return 0;
}