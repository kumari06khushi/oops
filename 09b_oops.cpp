#include<iostream>
using namespace std;
class c2;

class c1{
    int val1;
    friend void exchange(c1 & , c2 &);
public:
void indata(int a){
    val1=a;
}
void display(void){
    cout<<val1<<endl;
}

};
class c2{
    int val2;
      friend void exchange(c1 & , c2 &);
public:
void indata(int a){
    val2=a;
}
void display(void){
    cout<<val2<<endl;
}
};
void exchange(c1 & x ,c2 & y){
   int temp=x.val1;
   x.val1=y.val2;
   y.val2=temp;
}
int main(){
    c1 oa1;
    c2 ob1;
    oa1.indata(34);
    ob1.indata(67);
exchange(oa1 ,ob1);
cout<<"the value of c1 after exchange becomes:";
oa1.display();
cout<<"the value of c1 after exchange becomes:";
 ob1.display();
    return 0;
}