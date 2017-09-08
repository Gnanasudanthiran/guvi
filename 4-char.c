#include<stdio.h>

int main(){

char c;
scanf("%c",&c);

if(((c>='A')&&(c<='Z'))||((c>='a')&&(c<='z')))
    printf("%c is a Alphabet ",c);
else
     printf("%c is Not a Alphabet ",c);

     return 0;

}
