#include <iostream>
using namespace std;
int main()
{
    int n, dem = 0;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;
    do
    {
        cout << n << "-->";
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        dem++;
    } while (n > 1);
    cout << n << endl;
    cout << "So buoc: " << dem << endl;
    return 0;
}