#include <iostream>
using namespace std;
int main(){
    int n, sn=81,y=0;
    do{
cout<<" nhap 1 so bat ky :";
cin>>n;
y+=1;
if(n>=0&& n<=100){
if(n>sn){
    cout<< "lon hon"<<endl;
}if (n<sn){
    cout<<"nho hon"<<endl;
}}  else {cout<< "n ko hop le"<<endl;}
}while(sn!=n);
cout <<" doan dung. "<<endl;
cout<<"so lan da doan :"<<y;
    
  
    

return 0;
}