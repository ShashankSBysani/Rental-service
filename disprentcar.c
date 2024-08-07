#include "main.h"

void display_rented_cars(CarRental *rented_cars, int rented_count) {
    for (int i = 0; i < rented_count; i++) {
        printf("Car brand: %s, Customer name: %s, Customer number: %llu, Customer pincode: %u\n",
               rented_cars[i].car_name,
               rented_cars[i].customer.customer_name,
               rented_cars[i].customer.number,
               rented_cars[i].customer.pincode);
    }
}
