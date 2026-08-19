#include <iostream>
using namespace std;
int main()
{
    int n, tong = 0;
    cout << "moi nhap n :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        tong += i;
    }
    cout << "tong =" << tong;
    return 0;
}