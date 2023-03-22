#include<stdio.h>
int main()
{
    int i, sum=0;
    int a[5];
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++)
    {
        if (a[i]%2!=0)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
    return 0;
}