#include<iostream>
using namespace std;
/* 
case1:
class B: public A (class B inheritance from class A) {
//order of excution of constructor --> first A()then B()
};
case2:
class A: public B {
//order of excution of constructor --> first B()then A()
};
case3:
class A: public B,virtual public C{
//order of excution of constructor --> first c()then B() and A
};
 */
class Base1{
    int data1;
    public:
    Base1(int i){ //constructor
        data1 = i;
        cout<<"Base1 class constructor called"<<endl;
    }
        void print1(void){
cout<<"the value of data1 is" <<" "<<data1<<endl;
        }
    
};
class Base2{
    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout<<"Base2 class constructor called"<<endl;
    }
        void print2(void){
cout<<"the value of data2 is" <<" "<<data2<<endl;
        }
    
};
class Derived: public Base1, public Base2{ //derived class inheritance
int derived1,derived2;
public:
Derived(int a, int b, int c, int d): Base1(a),Base2(b){
derived1=c;
derived2=d;
cout<<"the derived class constructor called"<<endl;
}
void printd(void){
    cout<<"the value of derived1"<<" "<<derived1<<endl;
    cout<<"the value of derived2"<<" "<<derived2<<endl;
}
};

int main(){
    Derived khushi(1,2,3,4);
    khushi.print1();
       khushi.print2();
          khushi.printd();
    return 0;
}