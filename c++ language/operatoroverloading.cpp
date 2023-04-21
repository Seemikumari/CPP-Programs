#include <iostream>
using namespace std;
class space
{
    int x;
    int y;
    int z;
    public:
    void getdata( int a,int  b ,int  c);
    void display(void);
    void operator_();
};
void space:: getdata(int a,int b, int c){
    x=a;
    y=b;
    z=c;

} 
void space::  display(void) {
    cout<<"x="<<x<<" "<<endl;
    cout<<"y="<<y<<" "<<endl;
    cout<<"z="<<z<<" "<<endl;
}
void space ::  operator_(){
    x=-x;
    y=-y;
    z=-z;

}
int main(){
    space s ;
    s.getdata(10,-20,30);
    cout<<"s:";
    s.display();
    cout<<"-s:";
    s.display();
    return 0;


}


