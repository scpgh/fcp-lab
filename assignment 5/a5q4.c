//....................Question-4.................//

#include<stdio.h>
int main(){

// Declaring variables

    char ch;

// scanning the character

    printf("Enter character: ");
    scanf("%c",&ch);

// Checking wheter the character is alphabet or not and also printing accordingly

    if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z'))){
        printf("The character entered is alphabet");

    }
    else{
         printf("The character entered is not a alphabet");
    }

    return 0;
}