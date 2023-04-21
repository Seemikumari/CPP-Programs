#include<iostream>
using namespace std;

class bankdeposite{
    int principal;
    int years;
    float interestRate;
    float returnValue;
    void show();

    public:
    bankdeposite(){}
    bankdeposite(int p,int y, float r);//r can be of value like 0.04
    bankdeposite(int p,int y, int r);//r can be of value like 14
};
bankdeposite :: bankdeposite(int p,int y ,float r){
    principal = p;
    years =y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i< y; i++){
        interestRate=returnValue *  (1+r);

    }
}

void bankdeposite :: show(){
    cout<<endl<<"principal amount was"<< principal<<endl
    << ".return value after"<<years
    <<"is"<<returnValue<<endl;
}
int main(){
    bankdeposite bd1,bd2,bd3;
    int p , y;
    float r;
    int R;

    cout<<"enter the value of p  y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = bankdeposite(p , y, r);
    return 0;
    
    return 0;
}