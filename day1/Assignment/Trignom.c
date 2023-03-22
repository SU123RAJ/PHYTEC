#include<stdio.h>
#include"Trigno.h"
int main()
{
	printf("Enter the sides of traingle:");
	float p,b,h;
	printf("ENter the perpendicular:");
	scanf("%f",&p);
       	printf("ENter the base:");
        scanf("%f",&b);
	printf("ENter the hypotensue:");
        scanf("%f",&h);
	printf("Sin of the traingle is :%f\n",sine(p,h));
	printf("Cos of tihe traingle is :%f\n",cosine(b,h));
	printf("Tan of the traingle is :%f\n",tantheta(p,b));
}


