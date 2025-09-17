#include <stdio.h>

int main(){
    float cp, sp;
    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);

    if(cp < sp){
        float profit = ((sp - cp)/cp)*100;
        printf("The profit is: %f", profit);
    }
    else if(cp > sp){
        float loss = ((cp - sp)/cp)*100;
        printf("The loss is: %f", loss);
    }
    else{
        printf("No loss or profit");
    }
    return 0;
}