#include <stdio.h>
#include <stdbool.h>

struct Car{
    int speed;
    char name[50];
    float weight;
};

int main() {
    struct Car bmv;
    bmv.speed = 250;
    strcpy(bmv.name,"BMV M5");
    bmv.weight = 250.5f;
    int speed = 200;
    struct Car audi  = {300, "audi a8",2700.0f};
    printf("%s его скорость : %d\n",audi.name, audi.speed);
    printf("%s его скорость : %d\n",bmv.name, bmv.speed);

    return 0;

}