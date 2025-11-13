#include <stdio.h>

int main() {
    char text[] = "lap trinh c";
    int i; 
    printf("Chuoi goc la: %s\n", text);
    printf("Cac ky tu trong chuoi:\n");
    for (i = 0; text[i] != '\0'; i++) {
        printf("%c ", text[i]);
    }
    printf("\n");

    return 0;
}
