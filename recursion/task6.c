#include<stdio.h>
int main()
{
    display();
    display();
    return 0;
}
void display()
{
    static int x;
    x+=10;
    printf("\nx=%d",x);
}