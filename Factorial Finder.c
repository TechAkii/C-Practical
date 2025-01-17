/*
Write a program to compute the factorial of a given number using a for loop.
•	Input: A positive integer n.
•	Output: The factorial of n.
Example:
Input: 5
Output: 120
*/

#include<stdio.h>
int main() {
    
    int i;
    int f = 1;
    
    printf("Input your positive integer : ");
    scanf("%i",&i);
    
    if(i>0){
        for(int n=1; n<=i; n++){
            
            f=f*n;
        }
    }
    else{
        printf("Invaild Number");
    }
    printf("The factorial value of %i = %i",i,f);
    
    return 0;
}