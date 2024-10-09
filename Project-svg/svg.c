#include <stdio.h>

int main(int argc, char** argv) {
    printf("%d\n", argc);
    FILE *file = fopen("new_flags.svg", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    char* a;
    printf("enter color code like that: #000000");
    scanf("%d",&a);
    fprintf(file, "<svg xmlns=\"http://www.w3.org/2000/svg\" height=\"100px\" width=\"200px\"><rect height=\"100\" width=\"200\" fill=\"%c\"/></svg>\n", a);
    fclose(file);
    return 0;
}
