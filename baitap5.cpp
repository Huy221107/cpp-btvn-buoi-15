#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double n, s = 0,dau = 1;
    cout << "nhap vao so nguyen duong n:";
    cin >> n;
    for (double i = 1; i <= n; i++)
    {
        s += dau * (1 / i );
        dau = -dau;
    }
    cout << fixed << setprecision(4);
    cout << "tong :" << s;

    return 0;
}