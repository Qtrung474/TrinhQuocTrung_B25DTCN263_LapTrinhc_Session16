#include <stdio.h>

int main() {
    char text[] = "Hoc cong nghe thong tin rat vui!";
    int i;
    int letterCount = 0; //letterCount : so luong chu cai
    printf("Chuoi goc la: %s\n", text);
    for (i = 0; text[i] != '\0'; i++) {
        
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')) {
            letterCount++; 
        }
    }
    printf("So luong ky tu la chu cai: %d\n", letterCount);

    return 0;
}
