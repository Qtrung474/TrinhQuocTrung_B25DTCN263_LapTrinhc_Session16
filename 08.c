#include <stdio.h>

int main() {
    char text[] = "hello world";
    int i; 
    printf("Chuoi goc: %s\n", text);
    if (text[0] >= 'a' && text[0] <= 'z') {
        text[0] = text[0] - 32;
    }
    for (i = 1; text[i] != '\0'; i++) {
        
        if (text[i-1] == ' ') {
            
            if (text[i] >= 'a' && text[i] <= 'z') {
                text[i] = text[i] - 32;
            }
        }
    }
    printf("Chuoi da viet hoa: %s\n", text);
    return 0;
}
