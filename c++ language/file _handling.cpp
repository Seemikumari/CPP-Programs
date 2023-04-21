#include <iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream hout("samplefile.txt");
    cout<<"enter your name";
    //creating a name string and filling it with the string entered by the user
    string name;
    cin>>name;
    //writing a string to the file
    //hout<<"my name is"+name;
   // hout.close();

    ifstream hin("samplefile.txt");
    string content;
    hin>>content;
    cout<<"the content of this file is :"<<content;

    return 0;
} 