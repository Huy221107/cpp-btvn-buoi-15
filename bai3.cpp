#include <iostream>
using namespace std;
void nhapMang(int a[], int n)
{
    cout << "nhap mang sau: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i + 1 << "]= ";
        cin >> a[i];
    }
}
void timMax(int a[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    cout << "max: " << max << endl;
}

void timMin(int a[], int n)
{
    int min;
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    cout << "min: " << min << endl;
}

float tinhTrungBinh(int a[], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += a[i];
    }
    return (float)tong / n;
}
int main()
{
    int n;
    cout << "nhap vao kich thuoc mang :";
    cin >> n;
    if (n <= 0)
    {
        cout << "So luong phan tu phai lon hon 0." << endl;
        return 1;
    }
    int a[n];
    nhapMang(a, n);
    timMax(a, n);
    timMin(a, n);
    cout << "Gia tri trung binh mang: " << tinhTrungBinh(a, n);
    return 0;
}