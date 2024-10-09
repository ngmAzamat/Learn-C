#include <stdio.h>
#include <stdbool.h>


int main(){
    // bool isHasCar = true; 
    /*нельзя базого bool  надо #include <stdbool.h>*/
    // int num;
    // num = 1;
    // short как int только от -32 000  до +32 000
    // short s = 32;s
    // unsigned short как ishort только от 0  до +64 000
    // unsigned short a = 50000;
    // s--;
    // int num_1 = 1;
    int x = 1;

    x++;
    x--;
    // unsigned int как int только от 0  до +4 млн 000
    // unsigned int a1 = 1;
    // long a2 = 1;
    // unsigned long a3 = 1;
    // long long a4 = 1;
    // unsigned long long a5 = 1;
    float a6 = 3.1415f;
    printf("Variable: %.2f\n", a6);
    // double float a7 = 3.3456789234567890;

    char cymvol = '%$';
    printf("%c\n", cymvol);
    printf("Louis of Anjoi\n");
    // вывод переменных int - %d
    printf("Variable: %d\n", x);
    return 0;

}
