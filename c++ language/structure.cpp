#include<iostream>
using namespace std;
struct employee 
{
    int eid;
    char favchar;
    float salary;
};

int main(){
    struct employee seemi;
    seemi.eid = 1;
    seemi.favchar='s';
    seemi.salary=1200000;
    cout<<"the value is"<<seemi.eid<<endl;
    cout<<"the value is"<<seemi.favchar<<endl;
    cout<<"the value is"<<seemi.salary<<endl;
    return 0;
    
    return 0;
}