#include<stdio.h>
int main(){
    char s[20],*p;
    scanf("%s",&s);
    p=&s[0];
    while(*p!='\0'){
        printf("%c",*p);
        p++;
    }
    printf("%c",*(s+3));
    return 0;
}