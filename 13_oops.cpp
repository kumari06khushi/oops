#include<iostream>
using namespace std;
class complex{
    int a,b;
public:
complex(){
    a=0;
    b=0;
}
complex(int x, int y){
    a=x;
    b=y;
}
complex(int x){
    a=x;
    b=0;
}
void displaypoint(){
  cout<<" your complex is"<<a<<" + "<<b<<"i"<<endl;
}
  };
  int main(){
  
      complex c1(3,4);
    c1.displaypoint();

  complex c2(5);
    c2.displaypoint();

    complex c3;
    c3.displaypoint();
    return 0;
  }