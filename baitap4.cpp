#include <iostream>
using namespace std;
int main(){
    int doan;
    int luot=7;
do{
    cout<<"Ban hay doan 1 so bat ky :";
    cin>>doan;
if(doan==81){
    
    cout<<"ban da doan dung "<< endl;
}
else {
    cout<<"ban da doan sai"<<endl;
}
luot--;
}while (doan!=81&&luot>0);
if(luot==0){
    cout<<"ban da het luot doan"<<endl;
    cout<<"nguoi choi da thua"<<endl;
    cout<<"so bi mat la: 81"<<endl;}
    else{
        cout<<"nguoi choi da thang"<<endl;
        cout<<"so bi mat la: 81"<<endl;
    }


}