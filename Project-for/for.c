#include <stdio.h>
#include <stdbool.h>


int main(){
    for(int num = 1; num < 10; num++) {
        printf("Number: %d\n",num);
    }
    bool IsHasCar = true;
    int a = 0;
    while(IsHasCar) {
        printf("Введите цифру:");
        scanf("%d", &a);
        if(a == 1) {
            IsHasCar = false;
        }
    }
    bool i = 1;
    for(int idk = 0; idk < 10; idk++) {
        // if(idk = 3) {
        //     break;
        // }
        if(idk % 2 == 0) {
            continue;

        }
        printf("%d\n", idk);
    }
    do{
        i++;
        printf("yes\n");
    } while (i == 3);
}
