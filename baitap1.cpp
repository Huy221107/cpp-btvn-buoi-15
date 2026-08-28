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
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[min])
            {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    cout << " mang sap xep giam dan :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}