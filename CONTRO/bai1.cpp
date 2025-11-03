#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    cout << a;
    
    int *pa = &a;
    int *pb = &b;



    *pa = *pa + *pb;
    cout << *pa;
}