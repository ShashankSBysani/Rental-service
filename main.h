#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include<stdio.h> 
struct details {
    char customer_name[50];
    long long int number;
    int pincode;
};
//Used To Store Car Brands
struct store {
    char car_name[20];
    struct details customer;
};

void car_rent();
//FUNCTION TO RETURN CAR
void car_return();
void display_available_car();
#endif
