#include<iostream>
using namespace std;
class complex;
 class calculator{
    public:
    int add(int a,int b){
        return (a+b);
    }
    int sumrealcomplex(complex,complex);
    int sumcompcomplex(complex,complex);
 };

 class complex{
    int a,b
 }