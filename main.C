/*Rental Service Application

*This APP Is Used For Renting Car

*This App Gives You A Wide Varity Of Cars To Chose

*This Also Has Differnt Pricing For Differnt Cars.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include"main.h"
#include"upper.c"
#include"dispavailcar.c"
#include"disprentcar.c"
#include"return.c"
#include"rent.c"
#include"readavailable.c"
#include"readrented.c"
#pragma pack(1)
int main() {
    int x;
    int *disp = (int *)malloc(5 * sizeof(int)); // Dynamically allocate memory for disp array
    if (disp == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize car availability
    read_available_cars(disp); // Read available cars from file

    CarRental *rented_cars = (CarRental *)malloc(100 * sizeof(CarRental)); // Allocate memory for rented cars
    if (rented_cars == NULL) {
        printf("Memory allocation for rented cars failed!\n");
        free(disp); // Free previously allocated memory
        return 1;
    }
    int rented_count = 0; // To keep track of the number of rented cars
    read_rented_cars(rented_cars, &rented_count); // Read rented cars from file

    printf("Welcome to the rental services\n");
    do {
        printf("\nPRESS 1 TO RENT\nPRESS 2 TO RETURN\nPRESS 3 TO DISPLAY AVAILABLE CARS\nPRESS 4 TO VIEW RENTED CARS\nPRESS 5 TO EXIT\n");
        while (scanf("%d", &x) != 1) {
            printf("Invalid input. Try again.\n");
            while (getchar() != '\n'); // Clear invalid input
        }

        switch (x) {
            case 1:
                car_rent(disp, rented_cars, &rented_count);
                break;
            case 2:
                car_return(disp, rented_cars, &rented_count);
                break;
            case 3:
                display_available_car(disp);
                break;
            case 4:
                display_rented_cars(rented_cars, rented_count);
                break;
            case 5:
                printf("Thank you for using our application 3.1\n");
                break;
            default:
                printf("WRONG CHOICE!! Try again.\n");
        }
    } while (x != 5);

    free(disp); // Free allocated memory
    free(rented_cars); // Free rented cars memory
    return 0;
}
