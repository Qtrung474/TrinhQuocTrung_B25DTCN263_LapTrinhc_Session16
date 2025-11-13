#include <stdio.h>

int main() {
    char text[] = "bcdac";
    int frequency[256] = {0};
    int i; 
    for (i = 0; text[i] != '\0'; i++) {
        frequency[text[i]]++;
    }
    printf("Ket qua dem:\n");
    for (i = 0; text[i] != '\0'; i++) {
        if (frequency[text[i]] > 0) {
            printf("%c: %d\n", text[i], frequency[text[i]]);
            frequency[text[i]] = 0; 
        }
    }
    return 0;
}
