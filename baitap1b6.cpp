#include <iostream>
using namespace std;
int main(){
    int i;

    cout << "nhap vao mot nam bat ky :";
    cin >> i;

    if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
        cout << i << " la nam nhuan";
    } else {
        cout << i << " khong phai la nam nhuan";
    }

    return 0;
}