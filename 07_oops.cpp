#include<iostream>
using namespace std;

class complex {
int a,b;

public:
void setNumber(int n1 , int n2){
  a=n1;
  b=n2;
}
//Below line means that non member-sumcomplex function is allowed to do anything with private part (member)
friend complex sumcomplex(complex o1 , complex o2);
void printNumber(){
    cout<<" your complex is"<<a<<" + "<<b<<"i"<<endl;
}

};
complex sumcomplex(complex o1 , complex o2){
    complex o3;
   o3.setNumber ((o1.a + o2.a), (o1.b + o2.b));
   return o3;
}

int main() {
    complex c1,c2,sum;
    c1.setNumber(1,4);
     c1.printNumber();

     c2.setNumber(5,8);
     c2.printNumber();

     sum=sumcomplex(c1,c2);
     sum.printNumber();

return 0;
}

/*property of friend functions

1. not in the scope of class
2. since it is not in the scope of the class,it cannot be called from the object of the class. c1sumcomplex()==invalid
3. can be invoked without the help of any obj
4. usually contans the obj as arguments
5.can be declared inside public or private section of the class
6. it cannot access the member directly by their names and need obj_name to access ant member

*/