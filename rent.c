#include "main.h"

void car_rent(int *disp, CarRental *rented_cars, int *rented_count) {
    int success = 0;
    int RENT_PRICE;
    unsigned int days = 0;
    char car_Brand[5][20] = {"FORD", "TATA", "MERCEDES", "AUDI", "ISUZU"};
    int RENT[5] = {250, 500, 650, 750, 850};
    char user_brand[20];
    CarRental rented;

    printf("BRANDS AVAILABLE:\n");
    printf("'FORD', 'TATA', 'MERCEDES', 'AUDI', 'ISUZU'\n");
    printf("|*|PER DAY RENT DEPEND ON CAR BRAND|*|\n");
    printf("||FORD       -  250||\n");
    printf("||TATA       -  500||\n");
    printf("||MERCEDES   -  650||\n");
    printf("||AUDI       -  750||\n");
    printf("||ISUZU      -  850||\n");

    do {
        printf("Enter car brand: ");
        scanf("%s", rented.car_name);
        to_uppercase(rented.car_name);

        strcpy(user_brand, rented.car_name);
        success = 0;

        for (int i = 0; i < 5; i++) {
            if (strcmp(car_Brand[i], user_brand) == 0) {
                success = 1;
                break;
            }
        }

        if (!success) {
            printf("Invalid car brand entered. Please select from the available brands.\n");
        }
    } while (!success);

    printf("Enter customer name: ");
    getchar(); // To consume newline left by previous scanf
    fgets(rented.customer.customer_name, sizeof(rented.customer.customer_name), stdin);
    strtok(rented.customer.customer_name, "\n"); // Remove newline character

    unsigned long long temp_number;
    printf("Enter customer number: ");
    while (scanf("%llu", &temp_number) != 1) {
        printf("Invalid input. Enter customer number: ");
        while (getchar() != '\n'); // Clear invalid input
    }
    rented.customer.number = temp_number;

    unsigned int temp_pincode;
    printf("Enter customer pincode: ");
    while (scanf("%u", &temp_pincode) != 1) {
        printf("Invalid input. Enter customer pincode: ");
        while (getchar() != '\n'); // Clear invalid input
    }
    rented.customer.pincode = temp_pincode;

    printf("Enter number of days you want to rent: ");
    while (scanf("%u", &days) != 1) {
        printf("Invalid input. Enter number of days you want to rent: ");
        while (getchar() != '\n'); // Clear invalid input
    }

    for (int i = 0; i < 5; i++) {
        if (strcmp(car_Brand[i], user_brand) == 0) {
            if (disp[i] > 0) {
                printf("%s is available for rent.\n", user_brand);
                disp[i]--;
                RENT_PRICE = days * RENT[i];
                printf("Total rent: %d\n", RENT_PRICE);
                printf("Car brand: %s\n", rented.car_name);
                printf("Customer name: %s\n", rented.customer.customer_name);
                printf("Customer number: %llu\n", rented.customer.number);
                printf("Customer pincode: %u\n", rented.customer.pincode);

                // Store rented car information
                rented_cars[*rented_count] = rented;
                (*rented_count)++; // Increment the rented count

                FILE *data = fopen("rentedcars.txt", "w");
                if (data != NULL) {
                    fprintf(data, "Total rent: %u\n", days);
                    fprintf(data, "Total rent: %d\n", RENT_PRICE);
                    fprintf(data, "Car brand: %s\n", rented.car_name);
                    fprintf(data, "Customer name: %s\n", rented.customer.customer_name);
                    fprintf(data, "Customer number: %llu\n", rented.customer.number);
                    fprintf(data, "Customer pincode: %u\n", rented.customer.pincode);
                    fclose(data);
                } else {
                    printf("Error writing to file.\n");
                }
            } else {
                printf("%s is not available for rent.\n", user_brand);
            }
            break;
        }
    }
}
