#include <iostream>
using namespace std;
int main()
{
    const int X = 10;
    int n, dem = 0;
    cout << "nhap vao so nguyen duong :";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "A[ " << i << " ]=";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == X)
        {
            dem++;
        }
    }
    cout << "so lan xuat hien cua x trong mnag :" << dem << endl;
    return 0;
}