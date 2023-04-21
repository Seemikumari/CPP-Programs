#include <iostream>
using namespace std;
class simple
{
    int data1;
    int data2;

public:
    simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }
    void printData();
};

void simple ::printData()
{
    cout << "the value of data is" << data1 << "and" << data2 << endl;
}

int main()
{
    simple s(1); /*if we will not pass any value in here then it will take value that we have pass in 
                   constructor function as default argument*/
    s.printData();

    return 0;
}