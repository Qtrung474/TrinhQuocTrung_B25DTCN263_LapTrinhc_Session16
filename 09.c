#include <stdio.h>

int main() {
    char str[] = "hello world"; 
    char charToRemove;// charToRemove : ky tu can xoa
    int i, j;
    printf("Chuoi goc: %s\n", str);
    printf("Nhap vao 1 ky tu de xoa: ");
    scanf(" %c", &charToRemove);
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != charToRemove) {
            str[j] = str[i];
            j++; 
        }
    }

    str[j] = '\0';
    printf("Chuoi sau khi xoa: %s\n", str);
    return 0;
}
