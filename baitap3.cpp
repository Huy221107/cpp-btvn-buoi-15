#include <iostream>
using namespace std;
void nhap(int &n, int a[])
{

    cout << "nhap vao mang a[n]: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i + 1 << "]: ";
        cin >> a[i];
    }
}

void them(int &n, int a[], int x, int b)
{
    n = n + 1;
    for (int i = n - 1; i > b; i--)
    {
        a[i] = a[i - 1];
    }
    a[b] = x;
}
void xoa(int &n, int a[], int k)
{
    for (int i = k - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n = n - 1;
}
void xuat(int &n, int a[])
{
    cout << "Cac phan tu trong mang la: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n, x, b, k;
    cout << "nhap vao so phan tu cua mang: ";
    cin >> n;
    int a[n];
    cout << "nhap so phan tu can them vao : ";
    cin >> x;
    cout << "nhap so phan tu can them vao vi tri can them: ";
    cin >> b;
    cout << "nhap vi tri can xoa: ";
    cin >> k;
    nhap(n, a);
    if (b < 0 || b > n || k < 0 || k >= n)
    {
        cout << "Vi tri khong hop le!" << endl;
        xuat(n, a);
        return 0;
    }
    them(n, a, x, b);
    xoa(n, a, k);
    xuat(n, a);
    return 0;
}