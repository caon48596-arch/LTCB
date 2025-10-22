#include <stdio.h>
int main()
{
    char n;
    scanf(" %c", &n);
    switch (n)
    {
    case 'e':
        printf("thoat ctrinh");
        break;
    case 'a':
        printf("nhap 2 so ");
        int a, b;
        scanf("%d%d", &a, &b);
        printf("cong 2 so kq la %d", a + b);
        break;
    case 'h':
        printf("ban can tro giup gi");
        break;
    case 't':
        printf("nhap 1 so");
        int c;
        scanf("%d", &c);
        if (c % 2 == 0)
        {
            printf("%d la so chan", c);
        }
        else
        {
            printf("%d la so le", c);
        }
        break;
    default:
        printf("tam biet ban");
        break;
    }
    return 0;
}