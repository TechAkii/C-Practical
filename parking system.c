/*
Task 8: Real-World Application – Parking System
Create a program that calculates the parking fee for vehicles.
•	Input: Number of vehicles and parking time for each.
•	Output: Total fee for each vehicle and grand total.
Parking Rates:
•	First 2 hours: Rs. 50 per hour.
•	Additional hours: Rs. 30 per hour.
Example:
Input:
3 vehicles:  
Vehicle 1: 3 hours  
Vehicle 2: 2 hours  
Vehicle 3: 5 hours  
Output:
Vehicle 1: Rs. 130  
Vehicle 2: Rs. 100  
Vehicle 3: Rs. 230  
Grand Total: Rs. 460  

*/
#include <stdio.h>
int main() {
    
    int veh,t,fee;
    
    printf("Number of Vehicles : ");
    scanf("%d",&veh);
    
    for(int i=1; i <= veh; i++){
        
        printf("Parking time (min) for vehicle %d : ",i);
        scanf("%d",&t);
        
        if(t<=120){
            
            fee = 50 * t;
        }
        
        else{
            
            fee = ( 120 * 50 )+( 30 * ( t - 120 ) );
            
        }
        
        printf("Parking price for vehicle %d is %d \n",i,fee);
        
        
        
    }
    
    return 0;
}
