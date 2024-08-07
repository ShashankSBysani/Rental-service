#ifndef CAR_RENTAL_H
#define CAR_RENTAL_H

// Define the Customer and CarRental structures
typedef struct {
    char customer_name[100];
    unsigned long long number : 64;
    unsigned int pincode : 16;
} Customer;

typedef struct {
    char car_name[20];
    Customer customer;
} CarRental;

// Function declarations
void to_uppercase(char *str);
void display_available_car(int *disp);
void display_rented_cars(CarRental *rented_cars, int rented_count);
void car_return(int *disp, CarRental *rented_cars, int *rented_count);
void car_rent(int *disp, CarRental *rented_cars, int *rented_count);
void read_available_cars(int *disp);
void read_rented_cars(CarRental *rented_cars, int *rented_count);

#endif // CAR_RENTAL_H
