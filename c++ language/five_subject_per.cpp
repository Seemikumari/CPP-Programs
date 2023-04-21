#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i;
    float num[100],sum=0,average,percentage;
    cout<<"enter the number of data";
    cin>>n;
    while (n>100||n <=0)
    {
    cout<<"the number shown is incorrect\n";
    cout<<"enter the number again\n";
    cin>>n;
    }
    for(i=0;i<n;i++)
    {
        cout<<i+1<<"enter number";
        cin>>num[i];
        sum+=num[i];
    }
    average=sum/n;
    cout<<"average="<<average<<endl;

    percentage=(sum/500)*100;
    cout<<"percentage="<<percentage;

    return 0;
}
