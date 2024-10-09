#include <stdio.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define BLUE  "\033[34m"
#define WHITE   "\033[37m"

int main() {
    printf("%sFranse%s\n",    BLUE, RESET);
    printf("%sEngland%s\n", RED,    RESET);
    printf("%sAustria%s\n",  WHITE,  RESET);
}
