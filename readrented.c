#include "main.h"

void read_rented_cars(CarRental *rented_cars, int *rented_count) {
    FILE *file = fopen("rentedcars.txt", "r");
    if (file != NULL) {
        unsigned long long temp_number;
        unsigned int temp_pincode;
        int RENT_PRICE;
        unsigned int days;

        while (fscanf(file, "Total rent: %u\n", &days) != EOF) {
            // Create a temporary CarRental structure to store the car data
            CarRental rented;

            // Read the remaining information
            fscanf(file, "Total rent: %d\n", &RENT_PRICE);
            fscanf(file, "Car brand: %s\n", rented.car_name);
            fscanf(file, "Customer name: %s\n", rented.customer.customer_name);
            fscanf(file, "Customer number: %llu\n", &temp_number);
            fscanf(file, "Customer pincode: %u\n", &temp_pincode);

            // Populate rented structure
            rented.customer.number = temp_number;
            rented.customer.pincode = temp_pincode;

            // Store in the rented_cars array
            rented_cars[*rented_count] = rented;
            (*rented_count)++; // Increment the rented count
        }
        fclose(file);
    } else {
        printf("Error reading rented cars from file.\n");
    }
}
