#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the alphabet\n");
    scanf("%c",&ch);
    if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("%c is a alphabet",ch);
    }
    else {
        printf("%c is not a alphabet",ch);
    }
}