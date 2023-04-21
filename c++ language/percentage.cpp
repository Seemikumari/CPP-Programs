#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int i,marks[10];
    float percentage =0,sum=0;
   // cout<<"enter the number of 5 subjects :";
    //cin>> number;
    cout<<"enter the marks of five subjects :";
    for(i=0; i<5;i++);
    {
    cin>> marks[i];
    sum =sum+marks[i];
    }
    percentage=(sum/500)*100;
    cout<<"percentage "<<percentage<<"%";

    return 0;
}