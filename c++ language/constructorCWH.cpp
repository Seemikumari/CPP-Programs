#include<iostream>
using namespace std;
class complex{
    int a, b;
    public: 
    //creating a constructor
   // constructor is a special member function with same name as of the class
   //it is used to initialise the object of its class
   //it is automatically invoked whenever an object is created
   complex(void);  //here i have just declared the function //constructor declaration
   void printNumber()
   {
    cout<<"your number is "<< a <<"+"<<b<<"i"<<endl;
   } 
                        
};

complex::complex(void){ //here i have define the function
    a=0; //if i will not initialize these values here then by default our program will show garbage value
    b=0;
    //cout<<"hello world";->we can also print values from  constructor
}
int main(){

    complex c;
    c.printNumber();
    return 0;
    
    
}