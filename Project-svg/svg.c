#include <stdio.h>

int main(int argc, char** argv) {
    printf("%d\n", argc);
    FILE *file = fopen("new_flags.svg", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    int a;
    printf("enter color code like that: 000000\n");
    scanf("%d",&a);
    int b;
    printf("enter height like that: 100\n");
    scanf("%d",&b);
    int c;
    printf("enter width: like that: 100\n");
    scanf("%d",&c);
    fprintf(file, "<svg xmlns=\"http://www.w3.org/2000/svg\" height=\"%dpx\" width=\"%dpx\"><rect height=\"%d\" width=\"%d\" fill=\"#%d\"/></svg>\n", b, c, b, c, a);
    fclose(file);
    return 0;
}
