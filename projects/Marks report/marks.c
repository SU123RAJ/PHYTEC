#include<stdio.h>
#include"report.h"
int main()
{   
        printf("\nPhysics Marks:%d \n",phy());
        printf("\nChemistry Marks:%d \n",chem());
        printf("\nMathematics Marks:%d \n",math());
        printf("\nEngish Marks:%d \n",eng());
        printf("\n");
        printf("GRADE SYSTEM\n");
        printf("\n");
        printf("grade\tmark\nO\t91-100\nA\t81-90\nB\t71-80\nC\t61-70\nD\t51-60\nE\t34-50\nFAIL\t0-33");
       return 0;
}
