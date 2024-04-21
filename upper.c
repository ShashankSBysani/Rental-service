#include"main.h"
#include<ctype.h>
void to_uppercase(char *str) {
    while (*str) {
        *str = toupper((char)*str);
        str++;

}}
