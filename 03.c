#include <stdio.h>
#include <string.h> 

int main() {
    char text[] = "12345";
    int length = strlen(text);
    int i; 
    printf("Chuoi goc: %s\n", text);
    printf("Chuoi dao nguoc: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", text[i]);
    }
    printf("\n");

    return 0;
}
