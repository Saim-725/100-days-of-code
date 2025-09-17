#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c){
        printf("An equilateral triangle");
    }
    else if(a == b && b != c && c != a){
        printf("An isosceles triangle");
    }
    else if(b == c && c != a && a != b){
        printf("An isosceles triangle");
    }
    else if(c  == a && a != b && b != c){
        printf("An isosceles triangle");
    }
    else{
        printf("A scalene triangle");
    }
    return 0;
}