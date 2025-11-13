#include <stdio.h>
#include <string.h> 

int main() {
    char str[] = "12345";
    int length = strlen(str);
    int i; 
    printf("Chuoi goc: %s\n", str);
    printf("Chuoi dao nguoc: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

