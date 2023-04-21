#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;
    public:
     void setId(void){
        salary=122;
        cout<<"enter the id of employee"<<endl;
        cin>>id;
     }

     void getId(void){
        cout<<"the id of this employee is"<<id<<endl;
     }
};

int main(){
    employee seemi,raj,shivam;
    //seemi.setId();
    //seemi.getId();
    /*THIS METHOD WILL WORK WHEN WE HAVE LIMITED NUMBER OF EMPLOYEES
    BUT WHAT IF WE HAVE MORE NUMBER OF EMPLOYEE*/
    employee fb[3];
    for(int i=0;i<3;i++){
        fb[i].getId();
        fb[i].setId();
    }
    return 0;
}