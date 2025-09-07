#include<iostream>
using namespace std;
class complex{
    int a,b;
public:
// create a constructor
//constructor is a special member function with same name of the class.
//it is used to initialize the object of its class
//it is automatically invoked whenever an ojbect is created

complex(void); // constructor declaration 
void printNumber(){
    cout<<" your complex is"<<a<<" + "<<b<<"i"<<endl;

}
};
complex :: complex(void){  //-->default constructor as it take no parameters
    a=10;
    b=6;
}
int main(){
    complex c1,c2,c3;
    c1.printNumber();
        c2.printNumber();
            c2.printNumber();
    return 0;
}

/*characteristics of constructors

1. It should be declered in the public section of the class.
2. they cannot return value and do not have return type.
3. it can have default arguments.
4. we can't refer to their address.
*/