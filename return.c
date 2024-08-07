#include"main.h"

void car_return(int *disp, CarRental *rented_cars, int *rented_count) {
    char car_brand[20];
    printf("Currently rented cars:\n");
    display_rented_cars(rented_cars, *rented_count); // Show rented cars before returning

    printf("Enter the car brand to return: ");
    scanf("%s", car_brand);
    to_uppercase(car_brand);

    // Find the car in the rented_cars array
    int found = 0;
    for (int i = 0; i < *rented_count; i++) {
        if (strcmp(rented_cars[i].car_name, car_brand) == 0) {
            found = 1;
            // Remove the car by shifting the remaining cars in the array
            for (int j = i; j < *rented_count - 1; j++) {
                rented_cars[j] = rented_cars[j + 1];
            }
            (*rented_count)--; // Decrement the rented count
            break;
        }
    }

    // Update availability
    if (strcmp(car_brand, "FORD") == 0 && disp[0] < 3) disp[0]++;
    else if (strcmp(car_brand, "TATA") == 0 && disp[1] < 5) disp[1]++;
    else if (strcmp(car_brand, "MERCEDES") == 0 && disp[2] < 2) disp[2]++;
    else if (strcmp(car_brand, "AUDI") == 0 && disp[3] < 4) disp[3]++;
    else if (strcmp(car_brand, "ISUZU") == 0 && disp[4] < 3) disp[4]++;
    else {
        printf("Invalid car brand or maximum cars already available.\n");
        return;
    }

    if (found) {
        printf("%s returned successfully.\n", car_brand);
    } else {
        printf("Car not found in rented cars.\n");
    }
}
