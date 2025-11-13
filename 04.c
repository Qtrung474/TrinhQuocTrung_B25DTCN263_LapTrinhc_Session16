#include <stdio.h>

int main() {
    char str[] = "Hoc lap trinh C rat thu vi";
    char searchChar;
    int count = 0;
    int i; 
    printf("Chuoi co san: %s\n", str);
    printf("Nhap vao 1 ky tu de dem: ");
    scanf(" %c", &searchChar); 
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == searchChar) {
            count++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan.\n", searchChar, count);

    return 0;
}

