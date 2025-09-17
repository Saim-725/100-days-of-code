#include <stdio.h>

int main(){
    char ch;
    printf("Enter the letter: ");
    scanf("%c", &ch);

    if(ch == 'a'){
        printf("%c is a vowel", ch);
    }
    else if(ch == 'e'){
        printf("%c is a vowel", ch);
    }
    else if(ch == 'i'){
        printf("%c is a vowel", ch);
    }
    else if(ch == 'o'){
        printf("%c is a vowel", ch);
    }
    else if(ch == 'u'){
        printf("%c is a vowel", ch);
    }
    else{
        printf("%c is a consonant", ch);
    }
    return 0;
}