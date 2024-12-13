#include <stdio.h>
#include <string.h>
#include <ctype.h> 
int main() {
    //Khai bao va gan gia tri cho chuoi
    char chuoi[100] = "hello world";
    // Kiem tra cac ky tu trong chuoi va viet hoa chu cai dau
    int i = 0;
    int vietHoa = 1;
    while (chuoi[i] != '\0') {
        if (vietHoa && isalpha(chuoi[i])) {
            chuoi[i] = toupper(chuoi[i]);
            vietHoa = 0;
        } else if (chuoi[i] == ' ') {
            vietHoa = 1;
        }
        i++;
    }
    // In ra chuoi da chuyen doi
    printf("Chuoi sau khi viet hoa cac chu cai dau: %s\n", chuoi);
    return 0;
}

