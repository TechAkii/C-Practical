/*
Task 6: Student Grading System
Write a program to calculate and display the average score, highest score, and lowest score of a class.
•	Input: Number of students and their marks.
•	Output: Class average, highest, and lowest marks.
Example:
Input:
5 students:  
Marks: 85, 90, 78, 92, 88  
Output:
Average: 86.6  
Highest: 92  
Lowest: 78  
*/
#include <stdio.h>
int main() {
    
    int marks,std,i,tot=0,highest,lowest;
    
    printf("How many Students : ");
    scanf("%d",&std);
    
    for(i=1; i <= std; i++)
    {
        
    printf("Input the mark of %d student : ",i);
    scanf("%d",&marks);
    
    if (i == 1) {
            highest = marks;
            lowest = marks;
        } else {
            if (marks > highest) {
                highest = marks;
            }
            if (marks < lowest) {
                lowest = marks;
            }
        }
    
    tot += marks;
    
    }
    
    printf("The Total is %d\n",tot);
    printf("The Highest is %d\n",highest);
    printf("The Lowest is %d\n",lowest);
    
    
    return 0;
}
