#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    cout<<"enter five numbers"<<endl;
    cin>>a,b,c,d,e;

    while(a>b||a>c||a>d||a>e){
        cout<<"the largest number is "<<a<<endl;
        if(b>a||b>c||b>d||b>e){
            cout<<"the  greatest number is "<<b <<endl;

        }
        if(c>a||c>b||c>d||c>e){
            cout<<" the greatest number is "<<c<<endl;

    }
    if(d>a||d>c||d>b||d>e){
            cout<<"the greatest number is "<<d<<endl;
    }
    if(e>a||e>c||e>d||e>b){
            cout<<"the greatest number is "<<e<<endl;
    }
    return 0;
    }
    

    

}