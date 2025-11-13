#include <stdio.h>

int main() {
    char text[] = "nguyenvana@gmail.com";
    int chuCai = 0;
    int chuSo = 0;
    int kyTuDacBiet = 0;
    int i; 
    for (i = 0; text[i] != '\0'; i++) {
        
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')) {
            chuCai++;
        }
        else if (text[i] >= '0' && text[i] <= '9') {
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
