#include <iostream>
using namespace std;
float tinhDienTichHCN(float dai, float rong)
{
    return dai * rong;
}
float tinhChuViHCN(float dai, float rong)
{
    return 2 * (dai + rong);
}
float tinhDienTichTronVoiBanKinh(float r, float PI = 3.14159)
{
    return PI * r * r;
}
float tinhChuViTron(float r, float PI = 3.14159)
{
    return PI * 2 * r;
}
int main()
{
    cout << "Dien tich hcn: " << tinhDienTichHCN(2, 3) << endl;
    cout << "Chu vi hcn: " << tinhChuViHCN(2, 3) << endl;
    cout << "Dien tich hinh tron: " << tinhDienTichTronVoiBanKinh(3) << endl;
    cout << "Chu vi hinh tron: " << tinhChuViTron(3) << endl;
    return 0;
}