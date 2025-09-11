#include<iostream>
using namespace std;
class BankDeposit{
  int principal;
  int years;
 float intrestrate;
  float returnvalue;

public:
 BankDeposit(){}
 BankDeposit(int p, int y, float r);
 BankDeposit(int p, int y, int R);
 void show();
};
   BankDeposit:: BankDeposit( int p, int y, float r)
  {
 principal=p;
 years=y;
 intrestrate=r;
 returnvalue = principal;
  for(int i=0;i<y;i++){
    returnvalue = returnvalue *(1+ intrestrate);
  }
 }

BankDeposit::BankDeposit( int p, int y,int R)
  {
 principal=p;
 years=y;
 intrestrate=float(R)/100;
 returnvalue = principal;
  for(int i=0;i<y;i++){
    returnvalue = returnvalue *(1+ intrestrate);
  }
 }

  void BankDeposit:: show(){
    cout<<endl<<"Principal ammount was"<<" "<<principal<<" "<<"Return value after"<<" "<<years<<" "<<"is"<<" "<<returnvalue<<" "<<endl;
  }

int main(){
  BankDeposit d1,d2,d3;
  int p,y;
  float r;
  int R;
  cout<<"enter the value of p y and r"<<endl;
  cin>>p>>y>>r;
  d1=BankDeposit(p,y,r);
  d1.show();

   cout<<"enter the value of p y and R"<<endl;
  cin>>p>>y>>R;
  d2=BankDeposit(p,y,R);
  d2.show();
  return 0;

}
