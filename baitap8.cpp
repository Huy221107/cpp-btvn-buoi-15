#include <iostream>
using namespace std;
int main()
{
    char cut;
    int n, tong = 0, dem = 0, max = 0;
    cout << "Con mua nua khong?(c/k)";
    cin >> cut;
    do
    {
        if (cut == 'c')
        {
            cout << "nhap gia mon hang :";
            cin >> n;
            cout << "Con mua nua khong?(c/k)";
            cin >> cut;
            tong += n;
            if (max < n)
            {
                max = n;
            }
        }
        dem++;
    } while (cut == 'c');
    if (cut == 'k')
    {
        cout << "Cam on ban da mua hang" << endl;
    }
    else
    {
        cout << "chuong trinh dung vi " << cut << " khac c " << endl;
    }
    cout << dem << " mon" << endl;
    cout << "tong :" << tong << endl;
    cout << "mon dat nhat :" << max << endl;

    return 0;
}