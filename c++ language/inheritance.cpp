#include<iostream>
using namespace std;


//base class
class employee{
    public:
    int id;
    float salary;
    
    employee(int inpid ){
        id = inpid;
        salary = 34.0;
    }
    employee(){}
};

//derived class syntax
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    members/methods/etc...
}
1.Default visibility mode is private.
2.In private visibility mode public members of base class becomes private members
of derived class
3.In public visibility mode public members of base class becomes public members
of derived class
4. private members of base class will never become a member of derived class
*/
//creating a programmer class derived from employee base class
class programmer : public employee{   //here public is visiblity mode
    public:
    programmer(int inpid){
        id = inpid;
    }
    int languagecode = 9;
    void getdata(){
        cout<<id<<endl;

    }
};
int main(){
    employee seemi(1),shivam(2);
    cout<<seemi.salary<<endl;
    cout<<shivam.salary<<endl;
    programmer skillf(10 );
    cout<<skillf.languagecode<<endl;
    skillf.getdata();
    return 0;
}