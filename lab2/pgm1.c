#include <stdio.h>

float calculateBill(char wardType, int days);

int main() {
    char Name[100],ward;
    int days;
    float totalBill, discount, finalBill;

    printf("Enter  Name: ");
    scanf("%s",Name);

    printf("Enter Ward Type (G/S/P): ");
    scanf(" %c", &ward);

    printf("Enter Number of Days: ");
    scanf("%d", &days);
    totalBill = calculateBill(ward, days);
   
    if(days>7)
    {
        discount=totalBill*0.05;
    }
    finalBill = totalBill - discount;
    printf("\nPatient Name: %s", Name);
    printf("Total Bill Before Discount: ₹%.2f\n", totalBill);
    printf("Discount Applied: ₹%.2f\n", discount);
    printf("Final Bill Amount: ₹%.2f\n", finalBill);

    return 0;
}

float calculateBill(char ward, int days) {
    float rate;

    if (ward== 'G' || ward == 'g') {
        rate = 1000.0;
    } else if (ward == 'S' || ward == 's') {
        rate = 2000.0;
    } else if (ward== 'P' || ward == 'p') {
        rate = 5000.0;
    } else {
        printf("Invalid Ward Type! Defaulting to General Ward.\n");
        rate = 1000.0;
    }
    return rate * days;
}
