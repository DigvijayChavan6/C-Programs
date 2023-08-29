#include<stdio.h>
#include<string.h>
struct stu{
    int roll;
    char name[20];
    double per;
}first={4113,"Digvijay",93.20};
int main(){
    void *p;
    printf("%d",sizeof(p));
    struct stu a,b;
    a.roll=9999;
    a.per=89;
    scanf("%s",a.name);
    struct stu *pp;
    pp=&first;
    printf("%d\n%s\n%f",pp-> roll,pp->name,pp->per);
    return 0;
}
