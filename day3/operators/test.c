/*#include<stdio.h>
int main()
{
    int i=5;
    int a=++i + ++i;
    printf("%d",a);
}*/
/*#include<stdio.h>
int main()
{
    int i=5;
    int a=++i + ++i + ++i;
    printf("%d",a);
}*/
/*#include<stdio.h>
/*int main()
{
    int i=16;
    i= i>15;
    printf("ï=%d",i);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i=5;
    int a=++i + ++i + ++i + ++i;
    printf("%d",a);
}*/
/*#include<stdio.h>
int main()
{
    int i=5;
    int a= --i + --i;
    printf("%d",a);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
int i=5;
int a=--i+--i+--i;
printf("%d",a);
}*/
/*#include<stdio.h>
/*int main()
{
    int i=5;
    int a=--i - --i - --i - --i;
    printf("%d",a);
}*/
/*#include<stdio.h>
int main()
{
    int a=3,b=4,c=0,d=5,m;
    m=a++&&b++&&c++||d++;
    printf("%d %d %d %d %d",a,b,c,d,m);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i=5;
    int a=--i + ++i - i-- + --i;
    printf("%d",a);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a =18,b=9,c,d,e=10;
    c=b++;
    d=b;
    printf("%d\n",a<b<c>d);
    printf("%d\n",b==e);
    printf("%d\n",c+1>e);
    printf("%d\n",a+c==b>e<c+d);
}