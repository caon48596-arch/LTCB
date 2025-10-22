#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n < 5)
    {
        printf("so khong chia het cho 5 duoc, yeu cau nhap lai ");
    }
    else
    {
        switch (n % 5)
        {
        case 0:
            printf("%d la so chia het cho 5", n);
            break;
        default:
            printf("%d la so du ", n % 5);
            break;
        }
    }
}
