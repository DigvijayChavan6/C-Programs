#include <stdio.h>
int main()
{
    unsigned long a = 1212123412;
    char ch = 'S';
    printf("%d", sizeof(char));
    printf("\n%d", a);
    struct mr
    {
        /* data */
        double dd;
        int a ,b ;
        float c , d;
        char name[10];
    }t;
    printf("\n%d",sizeof(t));
    
    return 0;
}