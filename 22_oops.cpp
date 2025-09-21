#include<iostream>
using namespace std;

//FIRST CLASS
class student {
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);

};
void student :: set_roll_number(int r){
    roll_number=r;
}
void student :: get_roll_number(){
    cout<<"the roll number is "<<" "<<roll_number<<endl;
}

//SECOND CLASS
class Exam:public student{
protected:
float maths;
float physics;
public:
void set_marks(float,float);
void get_marks(void);
}; 

void Exam :: set_marks(float m1 , float m2){
   maths = m1;
   physics =m2;
}
void Exam :: get_marks(){
    cout<<"The marks obtained in physics are "<<" "<<maths<<endl;
       cout<<"The marks obtained in maths are "<<" "<<physics<<endl;
}
//DERIVATIVE
class result : public Exam{
    float percentage;
    public:
    void display(){
        get_roll_number();
        get_marks();
        cout<<"your percentage is"<<" "<<(maths+physics)/2<<"%"<<endl;
    }
};
int main(){
    result khushi;
    khushi.set_roll_number(420);
       khushi.set_marks(94.0 ,90.0);
      khushi.display();
    return 0;
}