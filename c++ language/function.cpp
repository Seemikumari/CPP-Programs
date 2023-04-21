#include <iostream>
using namespace std;
// function prototype
int sum(int a, int b);
int sum (int ,int );  //without mentioning the variable we can also mention just data type
void g();
// int sum(int a, int b){
//     int c = a+b;
//     return c;
// }
int main()
{
    //num1 and num 2 are actual parameters
    int num1, num2;
    cout << "enter first number" << endl;
    cin >> num1;
    cout << "enter second number" << endl;
    cin >> num2;
    cout << "the sum of two numbers" << sum(num1, num2)<<endl;
    g();
    return 0;
}

void g(){
    cout<<"hello , good morning"<<endl;
}
// a and b are formal parameters  which will be taking values fron actual parameters

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

/*function prototyping
here we mainly mention the sequence of function
syntax:
type function_name(argument);*/
