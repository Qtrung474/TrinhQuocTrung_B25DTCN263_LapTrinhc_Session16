#include <stdio.h>

int main() {
    char str[] = "bcdac";
    int frequency[256] = {0};
    int i; 
    for (i = 0; str[i] != '\0'; i++) {
        frequency[str[i]]++;
    }
    printf("Ket qua dem:\n");
    for (i = 0; str[i] != '\0'; i++) {
        if (frequency[str[i]] > 0) {
            printf("%c: %d\n", str[i], frequency[str[i]]);
            frequency[str[i]] = 0; 
        }
    }
    return 0;
}
