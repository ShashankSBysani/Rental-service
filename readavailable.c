#include "main.h"

// Function to read available cars from display.txt
void read_available_cars(int *disp) {
    FILE *file = fopen("display.txt", "r");
    if (file != NULL) {
        char buffer[256];
        while (fgets(buffer, sizeof(buffer), file)) {
            if (sscanf(buffer, "FORD     = %d", &disp[0]) == 1) continue;
            if (sscanf(buffer, "TATA     = %d", &disp[1]) == 1) continue;
            if (sscanf(buffer, "MERCEDES = %d", &disp[2]) == 1) continue;
            if (sscanf(buffer, "AUDI     = %d", &disp[3]) == 1) continue;
            if (sscanf(buffer, "ISUZU    = %d", &disp[4]) == 1) continue;
        }
        fclose(file);
    } else {
        printf("Error reading available cars from file.\n");
    }
}
