#include<iostream>
using namespace std;

class Point{
    int x,y;
    public:
    Point (int a,int b){
        x=a;
        y=b;
    }
    void displayPoint(){
        cout<<"the point is"<<x<<","<<y<<endl;

    }
};
int main(){
    Point p(1,1); 
    p.displayPoint();

    Point q(4,6);
    q.displayPoint();

    return 0;
}

//crete a function which takes two point objects and computes the distance between those two objects.
//make it a friend function.