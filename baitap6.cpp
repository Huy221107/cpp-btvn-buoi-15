#include <iostream>
using namespace std;
int main()
{
    int n, tong = 0, a = 1;
    cout << "nhap vao so nguyen duong n: ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            tong += i;
        }
    }
    cout << "tong cac uoc so cua " << n << " la: " << tong << endl;
    if (tong == n)
    {
        cout << n << " la so hoan hao" << endl;
    }
    else
    {
        cout << n << " khong phai la so hoan hao" << endl;
    }
    return 0;
}