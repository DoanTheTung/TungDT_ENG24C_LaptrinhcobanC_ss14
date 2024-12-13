#include <stdio.h>
#include <string.h>
// Ham kiem tra ky tu chu cai
int laChuCai(char kyTu) {
    if ((kyTu >= 'A' && kyTu <= 'Z') || (kyTu >= 'a' && kyTu <= 'z')) {
        return 1;
    }
    return 0;
}
// Ham kiem tra chu so
int laChuSo(char kyTu) {
    if (kyTu >= '0' && kyTu <= '9') {
        return 1;
    }
    return 0;
}
int main() {
    // Khai bao va gan gia tri chi chuoi
    char chuoi[100] = "Hello my gmail is test123@gmail.com";
    int demChuCai = 0, demChuSo = 0, demKyTuDacBiet = 0;
    //Kiem tra do dai chuoi
    int doDai = 0;
    while (chuoi[doDai] != '\0') {
        if (chuoi[doDai] == '\n') {
            chuoi[doDai] = '\0';
        }
        doDai++;
    }
    // Kiem tra cac ky tu va de so luong chu cai, so luong chu so va ky tu dac biet 
    for (int i = 0; i < doDai; i++) {
        if (laChuCai(chuoi[i])) {
            demChuCai++;
        } else if (laChuSo(chuoi[i])) {
            demChuSo++;
        } else if (chuoi[i] != ' ') {
            demKyTuDacBiet++;
        }
    }
    // In ra so ky tu la chu cai
    printf("So ky tu la chu cai: %d\n", demChuCai);
    // In ra o ky tu la chu so
    printf("So ky tu la chu so: %d\n", demChuSo);
    // In ra so ky tu dac biet
    printf("So ky tu dac biet: %d\n", demKyTuDacBiet);
    return 0;
}

