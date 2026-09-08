#include <iostream>
using namespace std;
float cong(float a, float b)
{
    return a + b;
}
float tru(float a, float b)
{
    return a - b;
}
float nhan(float a, float b)
{
    return a * b;
}
float chia(float a, float b)
{
    if (b == 0)
    {
        cout << "gia tri b khong hop le.";
        return 0;
    }
    return a / b;
}
int main()
{
    int k;
    float n1, n2;
    do
    {
        cout << "may tinh da nang"<<endl;
        cout << "1. cong" << endl;
        cout << "2. tru" << endl;
        cout << "3. nhan" << endl;
        cout << "4. chia" << endl;
        cout << "5. thoat" << endl;
        cout << "chon mot lua chon: ";
        cin >> k;
        if (k > 0 && k < 5)
        {
            cout << "nhap so thuc thu nhat: ";
            cin >> n1;
            cout << "nhap so thuc thu hai: ";
            cin >> n2;
        }
        switch (k)
        {
        case 1:
            cout << n1 << " + " << n2 << " = " << cong(n1, n2) << endl;
            break;
        case 2:
            cout << n1 << " - " << n2 << " = " << tru(n1, n2) << endl;
            break;

        case 3:
            cout << n1 << " * " << n2 << " = " << nhan(n1, n2) << endl;
            break;
        case 4:
            cout << n1 << " / " << n2 << " = " << chia(n1, n2) << endl;
            break;
        default:
            cout << "cam on ban da su dung may tinh da nang.";
 break;
        }

    } while (k != 5);

        return 0;
}