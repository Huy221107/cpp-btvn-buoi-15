#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double n, s = 0;
    cout << "nhap vao so nguyen duong n:";
    cin >> n;
    for (double i = 1; i <= n; i += 2)
    {
        s += (1 / i - 1 / (i + 1));
    }
    cout << fixed << setprecision(4);
    cout << "tong :" << s;

    return 0;
}