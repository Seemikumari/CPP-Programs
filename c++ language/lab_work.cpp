#include<iostream>
using namespace std;
int main(){
    float bp,da,hra,netpay;
    cout<<"enter the basic salary of ramesh";
    cin>>bp;
    da=0.4*bp;
    hra=0.2*bp;
    netpay=bp+da+hra;
    cout<<"\n dearness allowance= "<<da;
    cout<<" \n house rent allowance="<<hra;
    cout<<"\n netpay of ramesh is="<<netpay;
    return 0;
}