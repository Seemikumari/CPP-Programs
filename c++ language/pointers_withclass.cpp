#include<iostream>
using namespace std;
 int main(){
    int a= 4;
    int * ptr = &a;
    cout<<"the value of a is "<<*ptr<<endl;

    //new operator
    //int *p = new int(40);
    float *p = new float(40.07);
    cout<<"the value at address p is "<<*p<<endl;

    int *arr = new int [3];
    arr[0]= 10;
   // arr[1]= 20;
   *(arr+1)=20;
    arr[2]= 30;
    delete[] arr;
    cout<<"the value of arr[0] is"<<arr[0]<<endl;
    cout<<"the value of arr[1] is"<<arr[1]<<endl;
    cout<<"the value of arr[2] is"<<arr[2]<<endl;

//delete operator

    return 0;
 }