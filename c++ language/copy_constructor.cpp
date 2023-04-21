#include<iostream>
using namespace std;

class number{
    int a;
    public:
    number(){  //It is mandatory to create default constructor
        a=0;
    }
    number(int num){
        a =num;
    }
    //when no copy constructor is found then compiler supplies its own copy constructor
    number(number &obj){
        cout<<"copy constructor called"<<endl;
        a =obj.a;
    }
    void display(){
        cout<<"the number for this object is"<<a<<endl;
    }
};

int main(){
    number x,y,z(45);
    z.display();
    x.display();
    y.display();
    number z1(x);//copy constructor invoked
    z1.display();

    //number z1(x);
    //z1.display();

    //z2=z; //copy constructor is not called

    number z3= z; //copy constructor is invoked
    z3.display();
    
    return 0;
}