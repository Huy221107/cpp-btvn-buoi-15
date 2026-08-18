#include <iostream>
using namespace std;
int main(){
    int n,a=0,max=0,c=0;
    cout<<"nhap so nguyen duong n:";
    cin>>n;
        while(n>0){
 c=n%10;
n=n/10;
a=a+1;
if(c>max){
    max=c;
}
        }cout<<"Chu so: "<<a<<endl;
        cout<<"Chu so lon nhat la: "<<max<<endl;
    return 0;
}