#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A &  setdata(int a){
  //void setdata(int a){
       this->a=a;
    }
    void getdata(){
        cout<<"the value of a is"<<" "<<a<<endl;
    }
};
int main(){
    //this is the keyword which is a pointer which point to the obj which invoked the member function
    A b;
     b.setdata(4).getdata();
    //b.setdata(4);
    //b.getdata();
return 0;
}