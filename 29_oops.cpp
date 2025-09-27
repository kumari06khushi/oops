#include<iostream>
using namespace std;
class Complex{
   int real ,imaginary;
   public:
   void getdata(){
 cout<<"the real part is"<<real<<endl;
  cout<<"the imaginary part is"<<imaginary<<endl;
   }
   void setdata(int a,int b){
    real=a;
    imaginary = b;

   }
};
int main(){
    Complex c1;
   // Complex *p= &c1;
    Complex *p = new Complex;
    (*p).setdata(1,6); //is exactly same as
//p->setdata(1,6);
//p->getdata();
  (*p).getdata();
    return 0;
}