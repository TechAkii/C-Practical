#include <stdio.h>

struct driver {
    char name[50];
    char tpnum[15];  // Changed to char array for telephone number
    char nic[15];    // Changed to char array for NIC number
};

struct vehicle {
    int vnumber;
    char location[50];
    struct driver dri;
};

int main() {
    int num, h, total = 0;
    
    printf("What's your vehicle type (Car =0, Bike=1, Truck=2): ");
    scanf("%d", &num);
    
    struct vehicle v;
    
    printf("Enter the vehicle number: ");
    scanf("%d", &v.vnumber);
    
    printf("Enter your destination: ");
    scanf(" %[^\n]", v.location);  // This will read a full sentence including spaces

    printf("Enter your name: ");
    scanf(" %[^\n]", v.dri.name);
    
    printf("Enter Your Telephone Number: ");
    scanf("%s", v.dri.tpnum);
    
    printf("Enter your NIC number: ");
    scanf("%s", v.dri.nic);
    
    printf("Enter total hours: ");
    scanf("%d", &h);

    // Corrected logic for vehicle type
    if (num == 0) {
        total = 100 * h;
    } else if (num == 1) {
        total = 50 * h;
    } else if (num == 2) {  // Fixed truck condition
        total = 200 * h;
    } else {
        printf("Error! Invalid vehicle type.\n");
        return 1;  // Exit with error
    }
    
    printf("\n--- Receipt ---\n");
    printf("Driver: %s\n", v.dri.name);
    printf("Vehicle Number: %d\n", v.vnumber);
    printf("Destination: %s\n", v.location);
    printf("Telephone: %s\n", v.dri.tpnum);
    printf("NIC: %s\n", v.dri.nic);
    printf("Total cost: %d LKR\n", total);
    
    return 0;
}
