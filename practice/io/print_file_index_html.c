#include <stdio.h>

int main(void) {
    FILE *file = fopen("index.html", "r");
    if (!file) {
        perror("fopen");
        return 1;
    }
    int c;
    while ((c = fgetc(file)) != EOF) {
        putchar(c);
    }
    fclose(file);
    return 0;
}