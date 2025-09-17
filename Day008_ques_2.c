#include <stdio.h>

int main(){
    int x, y, z;
    printf("Enter number 1: ");
    scanf("%d", &x);
    printf("Enter number 2: ");
    scanf("%d", &y);
    printf("Enter number 3: ");
    scanf("%d", &z);

    if(x > y && x > z){
        printf("%d is the greatest among these numbers\n", x);
    }
    else if(y > x && y > z){
        printf("%d is the greatest among these numbers\n", y);
    }
    else{
        printf("%d is the greatest among these numbers\n", z);
    }
    return 0;
}