#include <stdio.h>
#include <string.h>

int main() {
    char inputString[256];
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';
    size_t length = strlen(inputString);
    printf("----------------------------------\n");
    printf("Chuoi ban vua nhap la: %s\n", inputString);
    printf("Do dai cua chuoi la: %zu\n", length);

    return 0;
}
