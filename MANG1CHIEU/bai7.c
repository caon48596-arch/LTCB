#include <stdio.h>

int main()
{
    int a[10];
    int i;

    printf("Nhap 10 so nguyen:\n");
    for (i = 0; i < 10; i++)
    {
        if (scanf("%d", &a[i]) != 1)
        {
            printf("Nhap khong hop le.\n");
            return 1;
        }
    }

    // Tìm tần suất tối đa và các giá trị tương ứng
    int max_count = 0;

    // Đếm tần suất cho từng phần tử
    for (i = 0; i < 10; i++)
    {
        int count = 0;
        for (int j = 0; j < 10; j++)
        {
            if (a[i] == a[j])
                count++;
        }
        if (count > max_count)
        {
            max_count = count;
        }
    }

    // In các giá trị có tần suất bằng max_count
    printf("Gia tri co tan suat lon nhat ( %d lan):\n", max_count);
    for (i = 0; i < 10; i++)
    {
        int count = 0;
        for (int j = 0; j < 10; j++)
        {
            if (a[i] == a[j])
                count++;
        }
        if (count == max_count)
        {
            // Tránh in đi in lại cùng một phần tử nhiều lần nếu nó lặp trong mảng
            int already_printed = 0;
            for (int k = 0; k < i; k++)
            {
                if (a[k] == a[i])
                {
                    already_printed = 1;
                    break;
                }
            }

            printf("%d\n", a[i]);
        }
    }

    return 0;
}