#include <stdio.h>

int main() {
    int m;
    printf("Nhap mot so tu 1 den 7: ");
    scanf("%d", &m);

    switch (m) {
        case 5:
            printf("thu 5\n");
            break;
        case 1 || 8:
            printf("chu nhat\n");
            break;
        default:
            printf("Gia tri khong hop le");
            break;
    }
    return 0;
}