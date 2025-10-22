#include <stdio.h>
int main()
{
    int a, b;
    char pheptoan;
    scanf("%d %d\n", &a, &b);
    scanf("%c", &pheptoan);
    switch (pheptoan)
    {
    case '+':
        printf("ket qua la %d", a + b);
        break;
    case '-':
        printf("ket qua la %d", a - b);
        break;
    case '*':
        printf("ket qua la %d", a * b);
        break;
    case '/':
        if (a < b)
        {
            printf(" khong chia duoc ");
        }
        else if (a && b > 0)
        {
            printf("ket qua la %d", a / b);
        }
        break;
    default:
        printf("sai");
        break;
    }
    return 0;
}
