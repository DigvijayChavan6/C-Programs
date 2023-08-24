#include<stdio.h>
int main(){
    int n;
    printf("Enter size for matrix :");
    scanf("%d",&n);
    int tdim[n][n];
    printf("Enter %d elements:",n*n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("\n%d",&tdim[i][j]);
            printf("\nAddress is: %u and value is : %d", &tdim[i][j],tdim[i][j]);
        }
    }
    printf("\nBy row:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\nAddress is: %u and value is : %d", tdim[i]+j,*(tdim[i]+j));
        }
    }
    printf("\nBy column:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\nAddress is: %u and value is : %d", tdim[j] + i,*(tdim[j]+i));
        }
    }
    return 0;
}