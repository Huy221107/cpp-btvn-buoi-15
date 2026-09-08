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
  int n;
  cout << "Nhap n: ";
  cin >> n;
  int a[n];
  nhap(n, a);
  xuat(n, a);
  return 0;
}