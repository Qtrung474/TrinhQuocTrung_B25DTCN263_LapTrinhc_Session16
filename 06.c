#include <stdio.h>

int main() {
    char str[] = "Hoc cong nghe thong tin rat vui!";
    int i;
    int letterCount = 0; //letterCount : so luong chu cai
    printf("Chuoi goc la: %s\n", str);
    for (i = 0; str[i] != '\0'; i++) {
        
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            letterCount++; 
        }
    }
    printf("So luong ky tu la chu cai: %d\n", letterCount);

    return 0;
