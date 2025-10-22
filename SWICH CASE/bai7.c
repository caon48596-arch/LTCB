#include <stdio.h>
int main()
{

    char n1, n2;
    scanf("%c %c", &n1, &n2);
    switch (n1)
    {
    case 'k':
        if (n2 == 'k')
        {
            printf("hoa");
        }
        else if (n2 == 'b')
        {
            printf("n2 thang");
        }
        else if (n2 == 'a')
        {
            printf("n1 thang");
        }
        break;

    case 'b':
        if (n2 == 'k')
        {
            printf("n1 thang");
        }
        else if (n2 == 'b')
        {
            printf("hoa");
        }
        else if (n2 == 'a')
        {
            printf("n2 thang");
        }
        break;

    case 'a':
        if (n2 == 'k')
        {
            printf("n2 thang");
        }
        else if (n2 == 'b')
        {
            printf("n1 thang");
        }
        else if (n2 == 'a')
        {
            printf("hoa");
        }
        break;

    default:
        printf("sai yeu cau nhap lai");
        break;
    }
    return 0;
}