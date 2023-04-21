#include<iostream>
using namespace std;
 typedef struct student    /*typedf is added in this line 
 and ep in last line so that we can insert ep instead
 struct student wherever we are using */

 {
   int marks;
   int  mathematics;
   int  english;
   int  science;
   int  geography;
   int  hindi;
}  ep;
 int main(){

   float sum , percentage;
   ep seemi;
   seemi.mathematics=88;
   seemi.english=95;
   seemi.science=80;
   seemi.geography=90;
   seemi.hindi=87;
   cout<<"maths marks " <<seemi.mathematics<<endl;
   cout<<"english marks " <<seemi.english<<endl;
   cout<<"science marks  " <<seemi.science<<endl;
   cout<<"geography marks  " <<seemi.geography<<endl;
   cout<<"hindi marks "<<seemi.hindi<<endl;

   sum=seemi.mathematics+
   seemi.english
  + seemi.science
   +seemi.geography
   +seemi.hindi;
   percentage=(sum/500)*100;
   cout<<"the obtained percentage is  " <<percentage<<endl;
   return 0;




 }
 