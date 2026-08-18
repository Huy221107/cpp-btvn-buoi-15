#include <iostream>
using namespace std;
int main(){
    int n,dao=0,n1;
    cout<<"nhap vao so nguyen duong n:";
    cin >>n;
n1=n;
    while(n>0){  
dao=dao*10+n%10;
n=n/10;
    }
    cout<<" so n dau khi dao nguoc :"<<dao<<endl;
    if(n1==dao){
        cout<<n1<<" la so doi xung."<< endl;
    }
    else{
        cout<<n1<<" khong phai la so doi xung"<<endl;
    }
   return 0;
}