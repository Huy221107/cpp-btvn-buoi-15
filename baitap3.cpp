#include <iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"nhap vao so a: ";
cin>>a;
cout<<"nhap vao so b: ";
cin>>b;
while(b!=0){
   c=a%b;
  a=b;
  b=c;
}
cout<<"uoc chung lon nhat cua 2 so: "<<a;
return 0;
}