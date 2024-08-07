#include "main.h"

void display_available_car(int *disp) {
    printf("Available Car For Rent:\n");
    printf("FORD     = %d\n", disp[0]);
    printf("TATA     = %d\n", disp[1]);
    printf("MERCEDES = %d\n", disp[2]);
    printf("AUDI     = %d\n", disp[3]);
    printf("ISUZU    = %d\n", disp[4]);

    FILE *displ = fopen("display.txt", "w");
    if (displ != NULL) {
        fprintf(displ, "Available Car For Rent:\n");
        fprintf(displ, "FORD     = %d\n", disp[0]);
        fprintf(displ, "TATA     = %d\n", disp[1]);
        fprintf(displ, "MERCEDES = %d\n", disp[2]);
        fprintf(displ, "AUDI     = %d\n", disp[3]);
        fprintf(displ, "ISUZU    = %d\n", disp[4]);
        fclose(displ);
    } else {
        printf("Error writing to file.\n");
    }
}
