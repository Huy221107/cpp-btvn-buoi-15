#include <iostream>
using namespace std;
int main()
{
    int n, tong = 0;
    cout << "nhap so nguyen duong n: ";
    cin >> n;
    for (int i = 2; i <= n; i += 2)
    {
        tong += i;
    }
    cout << "tong cac so chan: " << tong << endl;
    return 0;
}