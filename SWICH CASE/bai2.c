#include <stdio.h>

int main() {

    int tiendien;scanf("%d", &tiendien);
    int loai;scanf("%d", &loai);
    switch(loai){
        case 1:
        printf("gia %d", tiendien * 3000);
        break;
        case 2:
        printf("gia %d", tiendien * 2500);
        break;
        case 3:
        printf("gia %d", tiendien * 2000);
        default:
        printf("khong co gia tien ");
        break;
    }
}