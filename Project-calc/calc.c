#include <stdio.h>
#define _USE_MATH_DEFINES 
#include <math.h> 
int main() {
    int symvol = 0;
    printf("вычислить площадь круга");
    printf("\n\nвведите Радиус круга:");
    scanf("%d", &symvol);
    float answer;
    answer = M_PI * symvol * symvol;
    printf("%f\n\n", answer);
    int symvol_2 = 0;
    printf("вычислить окружность круга");
    printf("\n\nвведите Радиус круга:");
    scanf("%d", &symvol_2);
    float answer_2;
    answer_2 = M_PI * symvol_2 * 2;
    printf("%f\n\n", answer_2);
    return 0;
}