#include <iostream>
using namespace std;
string xepLoai(float diem)
{
    
        if (diem>= 8 && diem < 10)
        {
            return "Gioi";
        }
        else if (diem >= 6)
        {
            return "Kha";
        }
        else if (diem >= 4)
        {
            return "Trung Binh";
        }
        else
        {
            return "Yeu";
        }
    }

void inBangXepLoai(float diem[], int &n)
{
    int dem = 0;
    cout << "Bang xep loai :" << endl;
    for (int i = 0; i < n; i++)
    {
        string loai = xepLoai(diem[i]);
        cout << "Hoc vien thu " << i + 1 << ", diem: " << diem[i] << ", dat loai " << loai << endl;
        if (loai == "Gioi")
            dem++;
    }
    cout << "So hoc sinh loai gioi: " << dem << endl;
}
int main()
{
    int n;
    cout << "nhap so luong hoc vien: ";
    cin >> n;
    if (n < 0)
    {
        cout << "So luong hoc vien hon hoac bang 0." << endl;
        return 1;
    }
    float diem[n];
    cout << "nhap diem tat ca hoc vien sau:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Hoc vien thu " << i + 1<<": ";
        cin>>diem[i];
    }
    inBangXepLoai(diem, n);
    return 0;
}