#include<iostream>
using namespace std;
float tinhTienHang(int soLuong, float donGia, float phanTramGiam = 0)
{
    return soLuong* donGia-(soLuong* donGia* phanTramGiam/100);
}
    int main(){
cout << "Tien hang khong giam gia: " << tinhTienHang(10, 20000) << endl;
cout << "Tien hang co giam gia 10%: " << tinhTienHang(10, 20000, 10) << endl;   
cout << "Tien hang co giam gia 50%: " << tinhTienHang(10, 20000, 50) << endl;
    }