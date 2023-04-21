#include<iostream>
using namespace std;

class base{
    protected:
      int a;   
    private:
      int b;
};

class derived : protected base{

};
int main(){
    base b;
    derived d;
    //cout<<d.a; -> can't access as it is derived through protected class
    
    return 0;
}