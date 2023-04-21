#include<iostream>
using namespace std;
 class test{
    int a;
    int b;

    public:
    //test(int i ,int j ):a(i),b(j)
    //test(int i , int j): a(i),b (i+j)
    //test(int i , int j): a(i),b (2*j)
    test(int i , int j): a(i),b (a+j)
    //test(int i , int j): b (i+j) ,a(i)
    //test(int i , int j): b (j) ,a(i+b) ->here a  will give garbage value as at the time of initialization a is initialized firstly  so it need to be executed first

    {
        cout<<"constructor executed"<<endl;
        cout<<"value of a is"<<a<<endl;
        cout<<"value of b is"<<b<<endl;
    }
 };
 int main(){
    test t(2,4);
    return 0;
 }
