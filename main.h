#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include<stdio.h> 
// Used To Store Customer Details
typedef struct  {
    char customer_name[50];
    long long int number;
    int pincode;
}details;
//Used To Store Car Brands
typedef struct  {
    char car_name[20];
    details customer;
}store;
void to_uppercase(char *str);
void car_rent();
//FUNCTION TO RETURN CAR
void car_return();
void display_available_car();
#endif
