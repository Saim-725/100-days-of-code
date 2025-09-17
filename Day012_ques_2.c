#include <stdio.h>

int main(){
    int units;
    printf("Enter the units: ");
    scanf("%d", &units);

    if(units <= 100){
        units = 5 * units;
        printf("Electricity bill is %d", units);
    }
    else if(units >= 100 && units <= 200){
        units = (5 * 100) + (7 * (units-100));
         printf("Electricity bill is %d", units);
    }
    else if(units >= 200 && units <= 300){
        units = (5 * 100) + (7 * 100) + (10 * (units - 200));
         printf("Electricity bill is %d", units);
    }
    else if(units >= 300){
        units = (5 * 100) + (7 * 100) + (10 * 100) + (12 * (units - 300));
        printf("Electricity bill is %d", units);
    }
    return 0;
}