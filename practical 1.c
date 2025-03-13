#include<stdio.h>

int main(){
    int marks[10][5],tot[10]={0};
    char grade;
    for(int n=0; n < 10;n++){
        for(int k=0; k < 5; k++){
            printf("Enter student %d  subject %d marks : ",n+1,k+1);
            scanf("%d",&marks[n][k]);
            tot[n] += marks[n][k];
        }
    }
    
    
        
        
    for(int n=0; n < 10;n++){
        printf("Student %d : ",n+1);
        for(int k=0; k < 5; k++){
            
            if (marks[n][k] >= 75)
                grade = 'A';
            else if (marks[n][k] >= 65)
                grade = 'B';
            else if (marks[n][k] >= 55)
                grade = 'C';
            else if (marks[n][k] >= 45)
                grade = 'D';
            else
                grade = 'F';
                
            printf("%d ",marks[n][k]);
            printf(" %c ",grade);
        }
        printf("\n");
    }
    
    
    return 0;
}
