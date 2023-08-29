#include<stdio.h>
int main(){
    int ar[90];
    ar[0]=23;
    ar[1]=90;
    ar[2]=89;
    int *p;
    printf("%u",ar);
    p=&ar[0];
    // p++;
    // p++;
    printf("\n%u",*(ar+1));
    return 0;
}