/*90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F*/
#include <stdio.h>

int main(){
    int m;
    printf("Enter your marks: ");
    scanf("%d", &m);

    if(m<=100 && m>=90){
        printf("Grade A");
    }
    else if(m<=90 && m>=80){
        printf("Grade B");
    }
    else if(m<=80 && m>=70){
        printf("Grade C");
    }
    else if(m<=70 && m>=60){
        printf("Grade D");
    }
    else{
        printf("Grade F");
    }
    return 0;
}