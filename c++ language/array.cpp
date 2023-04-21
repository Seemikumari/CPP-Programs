#include<iostream>
using namespace std;
int main(){
    int marks[4]={23,25,24,23};
    int mathmarks[4]={38,46,87,98};
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<"these are maths marks:"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    for(int i=0;i<=4;i++){
        cout<<"the value of marks"<<i<<"is"<<marks[i]<<endl;
    }

    //pointers and arrays
    int*p=marks;
    //cout<<*(p++)<<endl;
    //cout<<*(++p)<<endl;

    cout<<"the marks at index[0]"<<*p<<endl;
    cout<<"the marks at index[1]"<<*(p+1)<<endl;
    cout<<"the marks at index[2]"<<*(p+2)<<endl;
    cout<<"the marks at index[3]"<<*(p+3)<<endl;

    cout<<"the marks at index[0]"<<&p<<endl;
    cout<<"the marks at index[1]"<<&p+1<<endl;
    cout<<"the marks at index[2]"<<&p+2<<endl;
    cout<<"the marks at index[3]"<<&p+3<<endl;


    

    return 0;
}