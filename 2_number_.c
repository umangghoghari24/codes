#include<stdio.h>
int main()
{
    int i,k;
    printf("Enter number");
    scanf("%d",&k);
    for (i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",k,i,k*i);
    }
    return 0;
}