#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0 && b == 0)
    {
        if (c == 0)
        {
            printf("Vo so nghiem (phuong trinh la 0 = 0)\n");
        }
        else
        {
            printf("Phuong trinh vo nghiem");
        }
        return 0;
    }

    if (a == 0)
    {
        float x = -c / b;
        printf("Nghiem duy nhat x = %.1f", x);
        return 0;
    }

    float D = b * b - 4 * a * c;
    float a2 = 2 * a;

    if (D < 0)
    {
        printf("Vo nghiem");
    }
    else if (D == 0)
    {
        float x = -b / a2;
        printf("Nghiem kep x = %.1f", x);
    }
    else
    {
        float sqrtD = sqrt(D);
        float x1 = (-b - sqrtD) / a2;
        float x2 = (-b + sqrtD) / a2;
        printf("Nghiem x1 = %.1f, x2 = %.1f", x1, x2);
    }
    return 0;
}