#include <stdio.h>
void GiaiThapHaNoi(int n, char ts1, char ts2, char ts3)
{
    if (n == 1)
    {
        printf("Chuyen dia 1 tu coc %c den coc %c\n", ts1, ts3);
        return;
    }
    GiaiThapHaNoi(n - 1, ts1, ts3, ts2); //
    printf("Chuyen dia %d tu coc %c den coc %c\n", n, ts1, ts3);
    GiaiThapHaNoi(n - 1, ts2, ts1, ts3);
}

// Hàm main để chạy chương trình
int main()
{
    int soLuongDia;

    printf("--- Giai Thuat Thap Ha Noi ---\n");
    printf("Nhap so luong dia: ");
    scanf("%d", &soLuongDia);

    // Kiểm tra đầu vào hợp lệ
    if (soLuongDia < 1)
    {
        printf("So luong dia phai lon hon hoac bang 1.\n");
        return 1; // Thoát với mã lỗi
    }

    printf("\nCac buoc di chuyen cho %d dia:\n", soLuongDia);
    GiaiThapHaNoi(soLuongDia, 'A', 'B', 'C');

    return 0;
}