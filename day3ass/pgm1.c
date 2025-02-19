#include <stdio.h>
#include <string.h>

#define MAX_PASSENGERS 100

typedef struct {
    char name[50];
    int age;
    char destination[50];
} Passenger;

void addPassengers(Passenger passengers[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for Passenger %d : ", i + 1);
        scanf(" %s %d %s", passengers[i].name, &passengers[i].age, passengers[i].destination);
    }
}

void sortPassengers(Passenger passengers[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(passengers[j].destination, passengers[j + 1].destination) > 0) {
                Passenger temp = passengers[j];
                passengers[j] = passengers[j + 1];
                passengers[j + 1] = temp;
            }
        }
    }
}

void searchPassengers(Passenger passengers[], int n, char destination[]) {
    int found = 0;
    printf("Passengers traveling to %s:\n", destination);
    for (int i = 0; i < n; i++) {
        if (strcmp(passengers[i].destination, destination) == 0) {
            printf("%s\n", passengers[i].name);
            found = 1;
        }
    }
    if (!found) {
        printf("No passengers found.\n");
    }
}

int main() {
    int n;
    printf("Enter number of passengers: ");
    scanf("%d", &n);
    
    Passenger passengers[MAX_PASSENGERS];
    addPassengers(passengers, n);
    
    sortPassengers(passengers, n);
    
    printf("\nSorted Passengers by Destination:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %s\n", passengers[i].name, passengers[i].destination);
    }
    
    char destination[50];
    printf("\nEnter destination to search: ");
    scanf(" %s", destination);
    searchPassengers(passengers, n, destination);
    
    return 0;
}
