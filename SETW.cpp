#include<iostream>
#include<iomanip>
using namespace std;


int  main(){
    int a=10,b=200,c=20000;
    cout<<"without set value of a "<<a<<endl;
    cout<<"without set value of b "<<b<<endl;
    cout<<"without set value of c "<<c<<endl;
    cout<<"with set value of a "<<setw(8)<<a<<endl;
    cout<<"with set value of b "<<setw(8)<<b<<endl;
    cout<<"with set value of c "<<setw(8)<<c<<endl;
}