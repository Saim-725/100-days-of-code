#include <stdio.h>

int main(){
    int days;
    printf("Enter the number of days late to return book: ");
    scanf("%d", &days);

    if(days <= 5){
        days = 2 * days;
        printf("Fine: %d", days);
    }
    else if(days >= 5 && days <= 10){
        days = 4 * (days - 5) + (2 * 5);
        printf("Fine: %d", days);
    }
    else if(days >= 10 && days <= 20){
        days = 6 * (days - 10) + (2 * 5) + (4 * 5);
        printf("Fine: %d", days);
    }
    else if(days >= 30){
        printf("Membership cancelled");
    }
    return 0;
}