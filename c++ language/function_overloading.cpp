//overloading:using one thing for multiple usage.
/*Function overloading:here we create two function with
same name and at the time of calling the function the program 
itself with the help of argument will figure out that we are 
calling which function*/

    
#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}

int sum(int a,int b,int c){
    return a+b+c;
}
//calculate the volume of cylinder
int volume(double r, int h){
    return (3.14*r*r*h);
}

//calculate the volume of cube
int volume(int a){
    return a*a*a;

}
//volume of rectangular box
int volume(int l,int b,int h){
    return l*b*h;
}

int main(){
    cout<<"the sum a and b will be "<<sum(3,4)<<endl;
    cout<<"the sum a,b,c will be "<<sum(3,4,5)<<endl;
    cout<<"the volume of cylinder will be"<<volume(3,4)<<endl;
    cout<<"the volume of cube will be"<<volume(3)<<endl;
    cout<<"the volume of cuboid will be"<<volume(3,4,5)<<endl;

    return 0;
}