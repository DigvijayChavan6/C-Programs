#include<stdio.h>
void main(){
    int ar[5];
    for(int i=0;i<5;i++)scanf("%d",&ar[i]);
    printf("\nAddress of each element of array : ");
    for(int i=0;i<5;i++){
        printf("\n%u this address having data %d",ar+i,*(ar+i));
    }
    // Or we can also get address like below
    printf("\n");
    for(int i=0;i<5;i++){
        printf("\n%u this address having data %d",&ar[i],ar[i]);
    }
}