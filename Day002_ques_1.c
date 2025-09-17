#include <stdio.h>

int main(){
    int l, b;
    printf("The length of the rectangle is: ");
    scanf("%d", &l);
    printf("The breadth of the rectangle is: ");
    scanf("%d", &b);
     int Area = l*b;
    printf("The area of the rectangle is:%d\n ", Area);
     int Perimeter = 2*(l + b);
    printf("The perimeter of the rectangle is:%d\n ", Perimeter);
    
    return 0;
}