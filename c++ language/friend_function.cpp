#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setNumber(int n1,int n2){
         a=n1;
         b=n2;
    }
    //below line means that non_member sum complex function is allowed to access private data of this class
    friend complex sumComplex(complex o1,complex o2);
    void printNumber(){
        cout<<"your number is"<<a<<"+"<<b<<"i"<<endl;
    }
};
//prefered to give object input
complex sumComplex(complex o1,complex o2){
        complex o3;
        o3.setNumber((o1.a+o2.a), (o1.b+o2.b));
        return o3;
}

int main(){
    
    complex c1,c2,sum;
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    c1.printNumber();
    c2.printNumber();
    
    sum = sumComplex(c1,c2);
    sum.printNumber();

    return 0;


}

/*properties of friend function are:
1.not in the scope of class:it means that friend function will not be  apart 
of that class in which it is used, it can just access the private 
data of that class.
2.since it is not scope of the class it can not be called with the object of the class.
c1.sumComplex()==invalid
3. can be invoked without the help of any object.
4.usually contains the object as the arguments.
5. can be declared inside public or private function in the class.
6. it can not access the members directly by the names and need object_name.member_name
to access any member.*/