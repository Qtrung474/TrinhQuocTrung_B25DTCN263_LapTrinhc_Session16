#include <stdio.h>

int main() {
    char text[] = "hello world"; 
    char charToRemove;// charToRemove : ky tu can xoa
    int i, j;
    printf("Chuoi goc: %s\n", text);
    printf("Nhap vao 1 ky tu de xoa: ");
    scanf(" %c", &charToRemove);
    for (i = 0, j = 0; text[i] != '\0'; i++) {
        if (text[i] != charToRemove) {
            text[j] = text[i];
            j++; 
        }
    }

    text[j] = '\0';
    printf("Chuoi sau khi xoa: %s\n", text);
    return 0;
}
