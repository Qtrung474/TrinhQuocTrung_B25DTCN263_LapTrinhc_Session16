#include <stdio.h>
#include <string.h> 

int main() {
    char str[256];
    int soTu = 0;
    int inWord = 0; 
    int i;
    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            inWord = 0; 
        }
        else if (inWord == 0) {
            inWord = 1; 
            soTu++;     
        }
    }
    printf("So tu trong chuoi la: %d\n", soTu);

    return 0;
}


