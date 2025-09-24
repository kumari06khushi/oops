#include<iostream>
using namespace std;
/* students --> test
   students --> sports
   test --> result
    sports --> result
*/
class Students{
    protected:
    int roll_no;
    public:
    void set_no(int a){
        roll_no = a;
    }
    void print_no(void){
        cout<<"your roll no is"<<" "<<roll_no<<endl;
    }
};

class Test : virtual public Students{
    protected:
  float maths,phy;
    public:
    void set_marks(float m1,float m2){
     maths = m1;
     phy = m2;
    }
    void print_marks(void){
        cout<<"your result is here"<<endl
        <<"Maths"<<" "<<maths<<endl
        <<"physcis"<<" "<<phy<<endl;
    }
};

class Sports : virtual public Students{
    protected:
  float score;
    public:
    void set_score(float sc){
     score = sc;
    }
    void print_score(void){
        cout<<"your PT score is"<<" "<<score<<endl;
        
    }
};

class Result : public Test, public Sports{
private:
float total;
public:
void display(void){
total = maths + phy + score;
print_no();
print_marks();
print_score();
 cout<<"your total score is"<<" "<<total<<endl;
}
};
 
int main(){
    Result khushi;
    khushi.set_no(23228);
    khushi.set_marks(89.9,78.5);
     khushi.set_score(9);
         khushi.display();
    return 0;
}