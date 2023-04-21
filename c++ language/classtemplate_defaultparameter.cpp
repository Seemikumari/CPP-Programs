#include<iostream>
using namespace std;

template<class T1 = int, class T2 = float>
class seemi{
    public:
    T1 a;
    T2 b;
    seemi ( T1 x , T2 y){
        a= x;
        b=y;

    }
    void display(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is"<<b<<endl;
    }
};
int main(){
    seemi<> s(4, 6.4);
    s.display();
    seemi<int , float> g(3, 7.8);
    g.display();
    return 0;
}