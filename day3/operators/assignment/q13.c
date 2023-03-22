#include<stdio.h>
int main()
{
    int x;
    printf("Ënter a number to check positive or negative\n");
    scanf("%d",&x);
    if (x==0)
    {
        printf("%d is zero",x);
    }
    if (x%2==0)
    {
        if (x>0)
        {
            printf(" %d is a +ve even\n",x );
            }
            else {
                printf(" %d is a -ve even\n",x );
                }
    }
    if (x%2!=0)
    {
        if (x>0)
        {
            printf("%d is a +ve odd\n",x);
            }
            else
            {
                printf("%d is a -ve odd\n",x);
                }
    }
}