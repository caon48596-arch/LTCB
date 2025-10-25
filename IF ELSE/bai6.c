#include <stdio.h>

int main()
{
    int songuyen;
    scanf("%d", &songuyen);
    if (songuyen % 2 == 0 && songuyen % 5 == 0)
    {
        printf("la so chia het cho 2 va 5");
    }
    else if (songuyen % 2 == 0)
    {
        printf("la so chia het cho 2");
    }
    else if (songuyen % 5 == 0)
    {
        printf("la so chia het cho 5");
    }
    else
    {
        printf("khong chia het cho bat ki so nao");
    }
}
