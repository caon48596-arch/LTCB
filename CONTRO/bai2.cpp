#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    
    cin >> a;
    cin >> b;

    int *pa = &a;
    int *pb = &b;
    int sum = *pa + *pb;
    *pa = sum;
    cout << *pa;
    pb = pa;
    cout << *pb;
    *pb = 5;
    *pb = *pa;
}