#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    b=a^b;
    a=a^b;
    b=b^a;
    printf("after swapping %d %d",a,b);
    return 0;
}