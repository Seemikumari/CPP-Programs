//order of execution
#include<iostream>
using namespace std;


class base{
    int data;
    public:
    base(int i){
        data= i;
        cout<<"base class constructor called"<<endl;
    }
    void printdata(void){
        cout<<"the value of data is"<<data<<endl;
    }
};

class base2{
    int data2;
    public:
    base2(int i){
        data2 =i;
        cout<<"base2 class constructor called"<<endl;
    }
    void printdatabase2(void){
        cout<<"the value of data2 is"<<data2<<endl;
    }
};
class derived: public base, public base2{
    int derived1,derived2;
    public:
    derived(int a, int b, int c, int d):base(a),base2(b){
        derived1 = c;
        derived2= d;
        cout<<"derived class constructor called"<<endl;

    }
    void printdataderived(void){
        
        cout<<"the value of derived1 is"<<derived1<<endl;
        cout<<"the value of derived2 is"<<derived2<<endl;

    }
};

int main(){
derived seemi(1,2,3,4);
seemi.printdata();
seemi.printdatabase2();
seemi.printdataderived();

    return 0;
}