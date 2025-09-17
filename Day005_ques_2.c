#include <stdio.h>

int main()
{
    int t, hrs, min, sec;

    printf("Enter time in seconds: ");
    scanf("%d", &t);

     hrs = t/3600;
     min = (t%3600)/60;
     sec = min%60;

    printf("Time in new format is %d:%d:%d", hrs, min, sec);
    
    return 0;
}