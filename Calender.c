#include<stdio.h>
#include<stdbool.h>

int days(){
    
}

int main(){
    
    int year;
    int month[5][7],n=0;
    
    printf("Enter the year : \n");
    scanf("%d",&year);

    if(1){

        int jan=1,mar=1,may=1,jul=1,aug=1,oct=1,dec=1;
        int apr=0,jun=0,sep=0,nov=0;
    
    
        if( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )
        {
            feb=29;
            for(){    
                for(int i=0; i < 5; ++i){
                    for(int j=0; j < 7; ++j){   
                    n+=1;
            
                    if(n <=9){
                        printf("%d  ",n);
                    }
                    else if(n <=31){
                        printf("%d ",n);
                    }else{
                        break;
                    }
            
                   }
                   printf("\n");
                }
            }
        
        
        
        
        }
        else
        {
            feb=28;
        }
    
    }
    
    
    return 0;
}