#include<iostream>
using namespace std;
 class complex{
    int real , imaginary;
    public:
    void getdata(){
        cout<<"the real part is"<<real<<endl;
        cout<<"the imaginary part is"<<imaginary<<endl;
    }

    void setdata(int a , int b){
        real = a;
        imaginary = b;
    }
 };
 int main(){
    complex c1;
    //complex *ptr = &c1;
    complex *ptr = new complex; //with the help of new operator
   // (*ptr).setdata(1,7); is exactly same as
   ptr->setdata(1,7); //->this means set data
   // (*ptr).getdata(); is same as
   ptr->getdata();

    return 0;
 }