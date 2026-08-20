#include <iostream>
using namespace std;
int main()
{
    int n, k, dem = 0, du = 0;
    cout << "nhap vao so nguyen duong n:";
    cin >> n;
    cout << "nhap vao chu so k(0-9):";
    cin >> k;
    if (k >= 0 && k <= 9)
    {
        do
        {
            du = n % 10;
            if (du == k)
            {
                dem++;
            }
            n = n / 10;
        } while (n > 0);
    }
    cout << "chu so k xuat hien trong n :" << dem << " lan " << endl;
    return 0;
}