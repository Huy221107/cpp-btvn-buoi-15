#include <iostream>
using namespace std;
int main()
{
    int n, dem = 0;
    cout << "nhap vao so nguyen duong :";
    cin >> n;
    int a[n];
    cout << "nhap vao cac phan tu cua mang :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << " ";
        cin >> a[i];
    }
    cout << "mang goc :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "mang sau khi dao nguoc thu tu :" << endl;
    for (int i = n - 1; i > -1; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}