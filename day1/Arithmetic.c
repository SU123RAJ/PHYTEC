#include<stdio.h>
int add(int a ,int b)
{
	return a+b;
}
int sub( int a, int b)
{
	return a-b;
}
int mult(int a, int b)
{
	return a*b;
}
float div(float a, float b)
{

	float c = a/b;
	return c;
}
int mod(int a, int b)
{
	int rem = a%b;
	return rem;
}
int main()
{
	int a,b;
	printf("enter the 1st number");
	scanf("%d",&a);
	printf("enter the 2nd number");
	scanf("%d",&b);
	printf("Addition is: %d\n", add(a,b));
	printf("Subtraction is: %d\n", sub(a,b));
	printf("Multiplication is: %d\n", mult(a,b));
	printf("Division is : %f\n", div(a,b));
	printf("modulo is :%d\n", mod(a,b));
}

