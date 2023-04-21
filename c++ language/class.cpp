#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    char name[30];
    public:
    void getdata()
    {
        cout<<"enter the roll number and name";
        cin>>rollno>>name;
    }
    void putdata()
    {
        cout<<"rollnumber:"<< rollno <<endl;
        cout<<"name of student:"<< name << endl;
    }
    
};
int main(){
student s1;
s1.getdata();
s1.putdata();
return 0;
}