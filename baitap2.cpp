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
void themdau (int &n, int a[], int x)
{
    n=n+1;
    for(int i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=x;
}
void themcuoi(int &n, int a[], int x)
{
   n=n+1;
   a[n-1]=x;
}
void xuat(int n, int a[])
{
    cout << "Cac phan tu trong mang la: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
int n,x;
    cout << "nhap vao so phan tu cua mang: ";
    cin >> n;
int a[n];
cout<<"nhap so phan tu can them vao dau va cuoi mang: ";
    cin>>x;
    nhap(n, a);
    themdau(n, a, x);
    themcuoi(n, a, x);
    xuat(n, a);
    return 0;   
}