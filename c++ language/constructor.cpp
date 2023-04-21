// CONSTRUCTOR AND IT'S TYPES
// Constructors are of three types
// 1.DEFAULT constructor
// 2.PARAMETERIZED constructor
// 3.COPY constructor
/*here let us see an example of parameterized constructor, Parameterized
constructor is the one that takes value from the user and then pass it
 there are two ways to pass the value in parameterized constructor
 1. Implicit call
 2. Explicit call*/
#include <iostream>
using namespace std;

class Complex
{
int a,b;
public:
Complex(int,int); //constructor declaration

    void printNumber()
    {
        cout << "your number is" << a << "+" << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    // implicit call
    Complex a(4, 6);

    // explicit call
    Complex b = Complex(5, 7);

    a.printNumber();
    b.printNumber();

    return 0;
}