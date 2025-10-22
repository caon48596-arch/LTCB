#include <stdio.h>
#include <string.h>
int main()
{
    char n;
    scanf("%c", &n);
    switch (n)
    {
    case 'h':
        printf("xin chao");
        break;
    case 'c':
        printf("nhap vao 2 so ");
        int a, b;
        scanf("%d%d", &a, &b);
        printf("tong la %d", a + b);
        break;
    case 'n':
        char c[100];
        printf("moi ban nhap ten ");
        getchar();
        fgets(c, sizeof(c), stdin);
        printf("%s", c);
        break;
    case 'e':
        printf("ket thuc");
        break;
    default:
        printf("tam biet");
        break;
    }
    return 0;
}
