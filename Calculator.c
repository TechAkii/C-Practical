// Basic Calculator for five operands
#include <stdio.h>

int main() {
    
    printf("                     SIMPLE CALCULATOR\n");                    
    printf("                     For five Operands\n\n");
    
    double n1,n2,n3,n4,n5;
    char op1,op2,op3,op4,op5;
    
    printf("Input your numbers : ");
    scanf(" %lf %lf %lf %lf %lf",&n1,&n2,&n3,&n4,&n5);
    
    printf("Input your operators(ex: +,-,*,/) : ");
    scanf(" %c %c %c %c", &op1, &op2, &op3, &op4);
    
    switch (op1)
    {
        case '+':
            printf("\n%.1lf+%.1lf = %.1lf",n1,n2,n1+n2);
        break;
        case'-':
            printf("\n%.1lf-%.1lf = %.1lf",n1,n2,n1-n2);
        break;
        case '*':
            printf("\n%.1lf*%.1lf = %.1lf",n1,n2,n1*n2);
        break;
        case '/':
            if (n2 != 0) 
                printf("\n%.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
            else 
                printf("\nDivision by zero is not allowed");
        break;
        default:
            printf("\nInvaild Operation\n");
    }
     
        
    switch (op2){
        case '+':
            printf("\n%.1lf+%.1lf+%.1lf = %.1lf",n1,n2,n3,n1+n2+n3);
        break;
        
        case'-':
        printf("\n%.1lf-%.1lf-%.1lf = %.1lf",n1,n2,n3,n1-n2-n3);
        break;
        
        case '*':
            printf("\n%.1lf*%.1lf*%.1lf = %.1lf",n1,n2,n3,n1*n2*n3);
        break;
        
        case '/':
            if (n2 != 0 && n3 != 0)
                printf("\n%.1lf / %.1lf / %.1lf = %.1lf", n1, n2, n3, n1 / n2 / n3);
            else 
                printf("\nDivision by zero is not allowed");
        break;
        default:
            printf("Invaild Operation\n");
        
    }
    
    switch (op3){
        case '+':
            printf("\n%.1lf+%.1lf+%.1lf+%.1lf = %.1lf",n1,n2,n3,n4,n1+n2+n3+n4);
        break;
        
        case'-':
            printf("\n%.1lf-%.1lf-%.1lf-%.1lf = %.1lf",n1,n2,n3,n4,n1-n2-n3-n4);
        break;
        
        case '*':
            printf("\n%.1lf*%.1lf*%.1lf+%.1lf = %.1lf",n1,n2,n3,n1*n2*n3*n4);
        break;
        
        case '/':
            if (n2 != 0 && n3 != 0 && n4 != 0)
                printf("\n%.1lf / %.1lf / %.1lf / %.1lf = %.1lf", n1, n2, n3, n4, n1 / n2 / n3 / n4);
            else 
                printf("\nDivision by zero is not allowed");
        break;
        default:
            printf("Invaild Operation\n");
    }
        
        
    switch (op4){
        case '+':
            printf("\n%.1lf+%.1lf+%.1lf+%.1lf+%.1lf = %.1lf",n1,n2,n3,n4,n5,n1+n2+n3+n4+n5);
        break;
        
        case'-':
            printf("\n%.1lf-%.1lf-%.1lf-%.1lf%.1lf = %.1lf",n1,n2,n3,n4,n5,n1-n2-n3-n4-n5);
        break;
        
        case '*':
            printf("\n%.1lf*%.1lf*%.1lf*%.1lf*%.1lf = %.1lf",n1,n2,n3,n4,n5,n1*n2*n3*n4*n5);
        break;
        
        case '/':
            if (n2 != 0 && n3 != 0 && n4 != 0 && n5 != 0)
                printf("\n%.1lf / %.1lf / %.1lf / %.1lf / %.1lf = %.1lf", n1, n2, n3, n4, n5, n1 / n2 / n3 / n4 / n5);
            else 
                printf("\nDivision by zero is not allowed");
        break;
        
        default:
            printf("Invaild Operation\n");
    }

    return 0;
}