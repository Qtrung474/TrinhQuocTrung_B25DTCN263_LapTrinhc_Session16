#include <stdio.h>

int main() {
    char str[] = "nguyenvana@gmail.com";
    int chuCai = 0;
    int chuSo = 0;
    int kyTuDacBiet = 0;
    int i; 
    for (i = 0; str[i] != '\0'; i++) {
        
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            chuCai++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            chuSo++;
        }
        else {
            kyTuDacBiet++;
        }
    }
    printf("So ky tu la chu cai: %d\n", chuCai);
    printf("So ky tu la chu so: %d\n", chuSo);
    printf("So ky tu dac biet: %d\n", kyTuDacBiet);

    return 0;
}
