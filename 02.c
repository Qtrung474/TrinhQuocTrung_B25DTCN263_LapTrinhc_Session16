#include <stdio.h>

int main() {
    char str[] = "lap trinh c";
    int i; 
    printf("Chuoi goc la: %s\n", str);
    printf("Cac ky tu trong chuoi:\n");
    for (i = 0;str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");

    return 0;
}

