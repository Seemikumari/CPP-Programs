#include <iostream>
#include <fstream>
/*the useful classes for working with files in c++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

In order to work with files in c++, you will have to
open it. Primarily there are two ways to open a file:
1. using constructor
2. using the member function open () of the class

*/

using namespace std;
int main(){
    string st = "SHIVAM SINGH";
    string st2;
    //opening files using constructor
    ofstream out("samplefile.txt ");//write operation
    out<<st;

    //opening the file using constructor and reading it
    //ifstream in("samplefileb.txt"); //read operations
    //in>>st2;
    //getline(in,st2);
    //cout<<st2;

    
    return 0;
}