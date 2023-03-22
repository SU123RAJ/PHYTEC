#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character:\n");
    scanf("%c",&c);
    int lowercase = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    int uppercase = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    if (lowercase || uppercase)
    {
        printf("%c is a vowel\n",c);
    }
    else {
        printf("%c is a constant\n",c);
    }
}