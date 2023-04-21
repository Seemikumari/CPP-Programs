#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=2,b=33,c=444;
    cout<<"the value of a is"<<a<<endl;
    cout<<"the value of b is"<<b<<endl;
    cout<<"the value of c is"<<c<<endl;

    cout<<"the value of a is"<<setw(4)<<a<<endl;
    cout<<"the value of a is"<<setw(4)<<b<<endl;
    cout<<"the value of a is"<<setw(4)<<c<<endl;
    return 0;
}