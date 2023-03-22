#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of two numbers\n");
    scanf("%d\t %d\t",&a,&b);
    printf("Swapping of two number %d\t %d\t is",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d\t %d\t",a,b);
}