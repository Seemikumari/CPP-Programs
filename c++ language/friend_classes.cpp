#include <iostream>
using namespace std;

// forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealcomplex(complex, complex);
};

class complex
{
    int a, b;
    //friend int calculator ::sumRealcomplex(complex o1, complex o2);
     friend class calculator;

     
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "your number is" << a << "+" << b << "i" << endl;
    }
};

int calculator ::sumRealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator calc;
    int res = calc.sumRealcomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is" << res << endl;
    return 0;
}