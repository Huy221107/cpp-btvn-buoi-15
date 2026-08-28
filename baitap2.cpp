#include <iostream>
using namespace std;
int main()
{
    int n, dem = 0;
    cout << "nhap vao so nguyen duong :";
    cin >> n;
    int a[100];
    cout << "nhap vao cac phan tu cua mang :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << " ";
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << " mang sap xep giam dan :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}