#include <stdio.h>
int main()
{
    int n;scanf("%d", &n);
    if(n%6==0){
        int sum = 1;
        for(int i = 1; i <= n; i++){
            sum *= i;
        }
        printf("ketqua la %d", sum);
    }
}
