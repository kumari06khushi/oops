#include<iostream>
using namespace std;
class Number{
int a;
public:
 Number(){
    a=0;
 }

 Number(int num){
    a = num;
 }

 //when there is no copy constructor is found ,compiler supplies ist own copy constructor
 Number(Number &obj){
   cout<<"copy constructor called !!!"<<endl;
   a = obj.a;
 } 
 void display(){
    cout<<" the no for this object is"<<a <<endl;
 }
};
int main(){
 Number x,y,z(45),z2;
 x.display();
 y.display();
 z.display();
 Number z1(x);
 z1.display();
z2 = z; //copy construstor not called
 z2.display();

Number z3 = z; //copy  construstor invoked
 z3.display();
 return 0;
 }
