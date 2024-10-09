#include <stdio.h>
int main() {
    FILE *file = fopen("text.txt","w");
    fprintf(file,"Hello\n");
    fclose(file);
    return 0;
}