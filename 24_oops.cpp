#include<iostream>
using namespace std;
class Base1{
public:
void greet(){
    cout<<"How are you?"<<endl;
}
};
class Base2{
public:
void greet(){
    cout<<"Kaise ho?"<<endl;
}
};
 class Drive:public Base1,public Base2{
int a;
public:
void greet(){
    Base2::greet();
}
 };

//method 2

 class B1{
public:
void greet(){
    cout<<"Hello world"<<endl;
}
};
class B2{
public:
void greet(){
    cout<<"this world is so beatiful"<<endl;
}
};
 class D:public B1,public B2{
int a;
public:
void say(){
   cout<<"Hii..."<<endl;
}
 };
int main(){
    
    //Ambibuity
    //  Drive d;
    //  d.greet();

    //Ambibuity1
    D d1;
    d1.say();
    return 0;
}