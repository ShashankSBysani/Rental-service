#include "main.h"

void to_uppercase(char *str) {
    while (*str) {
        *str = toupper((char)*str);
        str++;
    }
}
