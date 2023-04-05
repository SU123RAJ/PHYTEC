#include <stdio.h>  
int main()  
{  
     
    char c;  
    float x,y;   
    float f;  
    printf (" Choose an operator(+, -, *, /) to perform the operation in C Calculator \n ");  
    scanf ("%c", &c); 
    if (c == '/' )  
    {  
        printf (" Division");  
    }  
    else if (c == '*')  
    {  
        printf ("Multiplication");  
     }  
       
    else if (c == '-')  
    {  
        printf ("Subtraction");  
     }  
        else if (c == '+')  
    {  
        printf ("Addition");  
     }     
    printf (" \n Enter the first number: ");  
    scanf(" %f", &x);  
    printf (" Enter the second number: ");  
    scanf (" %f", &y); 

      
    switch(c)  
    {  
        case '+':  
            f = x + y; 
            printf (" Addition of %f and %f is: %.3f", x, y, f);  
            break;  
          
        case '-':  
            f = x - y;   
            printf (" Subtraction of %f and %f is: %.3f", x, y, f);  
            break;  
              
        case '*':  
            f = x * y;  
            printf (" Multiplication of %f and %f is: %f", x, y, f);  
            break;            
          
        case '/':  
        
            f = x / y;   
            printf (" Division of %f and %f is: %.2f", x, y, f);  
            break;  
        default:  
            printf ("Error");               
    }  
    return 0;  
}  