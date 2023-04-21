#include<iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "the id of this employee is " << id << "and this is employee number" << count << endl;
    }

    static void getCount(void){
        cout<<"the value of count is"<<count<<endl;
    }
};

int employee::count = 1000; // default value is zero

int main()
{
    employee harry, seemi, shivam;
    // harry.id =1;
    // harry.count=1; //cannot do this as id and count are private variables
    /*here count is behaving like a static data member of class
    employee*/
    harry.setData();
    harry.getData();
    employee::getCount();

    seemi.setData();
    seemi.getData();
    employee::getCount();


    shivam.setData();
    shivam.getData();
    employee::getCount();
    
    return 0;
}
