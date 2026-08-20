#include <iostream>
using namespace std;
int main()
{
    int tstart, tend, buocnhay, dem = 0, tFt = 0, tFs = 0;
    cout << "nhiet do bat dau: ";
    cin >> tstart;
    cout << "nhiet do ket thuc :";
    cin >> tend;
    cout << "buoc nhay :";
    cin >> buocnhay;
    for (int i = tstart; i <= tend; i += buocnhay)
    {
        tFt = tstart * 1.8 + 32;
        tFs = tend * 1.8 + 32;
        dem++;
    }
    if (dem == 1)
    {
        cout << "Dung " << dem << " dong" << endl;
        cout << tstart << " do C = " << tFt << " do F" << endl;
        cout << tend << " do C = " << tFs << " do F" << endl;
    }
    else
    {
        cout << dem << " dong" << endl;
        cout << tstart << " do C = " << tFt << " do F" << endl;
        cout << tend << " do C = " << tFs << " do F" << endl;
    }
    return 0;
}