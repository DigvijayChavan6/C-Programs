#include<stdio.h>
int main(){
    struct stu{
        char name[20];
        int a,b,c;
    } *p,st1;
    p=&st1;
    printf("Enter name : ");
    scanf("%s",p->name);
    printf("\nEnter three subject marks : ");
    scanf("%d%d%d", &p->a, &p->b, &p->c);
    int tot = p->a + p->b + p->c;
    printf("\nTotal is %d and name is %s",tot,p->name);
    return 0;
}