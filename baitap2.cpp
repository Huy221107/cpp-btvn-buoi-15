#include <iostream>
using namespace std;
bool laSoChan(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    return false;
}
bool laSoNguyenTo(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 1; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        return true;
    }
}
bool laNamNhuan(int nam)
{
    if (nam % 4 == 0 && nam % 100 != 0 || nam % 100 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int n, nam;
    cout << "Nhap vao n: ";
    cin >> n;
    cout << "Nhap vao 1 nam bat ki: ";
    cin >> nam;
    if (laSoChan(n))
    {
        cout << n << " la so chan" << endl;
    }
    else
    {
        cout << n << " khong phai la so chan" << endl;
    }
    if (laSoNguyenTo(n))
    {
        cout << n << " la so nguyen to" << endl;
    }
    else
    {
        cout << n << " khong phai la so nguyen to" << endl;
    }
    if (laNamNhuan(nam))
    {
        cout << nam << " la nam nhuan" << endl;
    }
    else
    {
        cout << nam << " khong phai la nam nhuan" << endl;
    }
    return 0;
}