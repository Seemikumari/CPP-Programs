#include<iostream>
using namespace std;
/*student-->test
 student --> sports
 test +sports--> result*/

class student{
    protected:
    int roll_no;
    public:
    void set_number (int a){
        roll_no=a;
    }
    void print_number(void){
        cout<<"your roll_number is"<< roll_no<<endl;
    }
};

class test : virtual public student{
    protected:
    float maths , physics;
    public:
    void set_marks(float m1, float m2){
        maths = m1;
        physics = m2;
    }
    void print_marks(void){
        cout<<"you have obtained"
             <<"maths"<<maths<<endl
             <<"physics"<<physics<<endl;

    }
};

class sports : virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void print_score(void){
        cout<<"your pt score is"<<score<<endl;
    }
};

class result: public test,public sports{
    private:
    float total;
    public:
    void display(void){
        total= maths +physics+score;
        print_number();
        print_marks();
        print_score();
        cout<<"your total score is"<<total<<endl;
    }

};


int main(){

    result seemi;
    seemi.set_number(4200);

    seemi.set_marks(79.9,99.5);
    seemi.set_score(9);
    seemi.display();
    
    return 0;
}