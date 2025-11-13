#include <stdio.h>

int main() {
    char str[] = "hello world";
    int i; 
    printf("Chuoi goc: %s\n", str);
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }
    for (i = 1; str[i] != '\0'; i++) {
        
        if (str[i-1] == ' ') {
            
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
        }
    }
    printf("Chuoi da viet hoa: %s\n",str);
    return 0;
}
