#include <stdio.h>
#include <stdbool.h>


int main(){
    int num = 1;
    if (num == 1 && num == 1 || num == 1) {
        printf("%d\n", num);
    } else if(num >= 2) {
        printf("2");
    }
    else {
        printf("IDK");
    }
    return 0;

    switch(num) {
        case 10: printf("10\n");break;
        default: printf("none\n");break
    }

}
