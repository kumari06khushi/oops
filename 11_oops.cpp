#include<iostream>
using namespace std;
class complex{
    int a,b;
public:

complex(int , int); // constructor declaration 
void printNumber(){
    cout<<" your complex is"<<a<<" + "<<b<<"i"<<endl;

}
};
complex :: complex(int x,int y){  //-->this is parameterized constructor as it take no parameters
    a=x;
    b=y;
}
int main(){
    //implicit call
    complex s(4,6);
    s.printNumber();

    //explicit call
complex t=complex (9,3); 
    t.printNumber();
    return 0;
}