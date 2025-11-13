#include <stdio.h>
#include <string.h> 

int main() {
    char text[256];
    int soTu = 0;
    int inWord = 0; 
    int i;
    printf("Nhap vao mot chuoi: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ') {
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
