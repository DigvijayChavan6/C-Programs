#include<stdio.h>
#include<string.h>
struct stu{
    int roll;
    char name[20];
    double per;
}first={4113,"Digvijay",93.20};
int main(){
    struct stu a,b;
    int i=0;
    while(first.name[i]!='\0'){
        printf("%c", first.name[i]);
        i++;
    }
    printf("%d\n%c\n%f",first. roll, first.name,first.per);
    return 0;
}
