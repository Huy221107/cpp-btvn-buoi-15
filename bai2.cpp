#include <iostream>
using namespace std;
bool laSoNguyenTo(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void inSoNguyenTo(int a[], int n) {
    cout << "Cac so nguyen to trong mang: ";
    bool coSoNguyenTo = false;

    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(a[i])) {     
            cout << a[i] << " ";
            coSoNguyenTo = true;
        }
    }

    if (!coSoNguyenTo) {
        cout << "Khong co so nguyen to nao.";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "nhap vao so bat ki: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "So luong phan tu phai lon hon 0." << endl;
        return 1;
    }
    int a[n];
    cout << "nhap cacc mang sau:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i + 1 << "]= ";
        cin >> a[i];
    }
    inSoNguyenTo(a,n);
    return 0;
}