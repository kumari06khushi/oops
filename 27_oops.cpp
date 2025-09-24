#include<iostream>
using namespace std;
/* stntax for initialization list in constructor:
constructor (argument-list):initilization-section
{
assigmrnt + other code;
}
class Test{
 int a;
 int b;
 public:
 Test(inti,int j): a(i),b(j)
 {
  cout<<"constructor execution "<<endl;
  cout<<"the value of a is"<<" "<<a<<endl;
cout<<"the value of b is"<<" "<<b<<endl;
  }
 };

 */
class Test{
 int a;
 int b;

 public:
 // Test(int i,int j): a(i),b(j)
 // Test(int i,int j): a(i),b(i+j)
  // Test(int i,int j): a(i),b(2*j)
    //Test(int i,int j): a(i),b(a+j)
     //Test(int i,int j): b(j),a(i+j)--> give guarbage value beacuse a initialize first

 Test(int i,int j): a(i),b(j)
 {
  cout<<"constructor execution "<<endl;
  cout<<"the value of a is"<<" "<<a<<endl;
cout<<"the value of b is"<<" "<<b<<endl;
 }
  };
  int main(){
    Test k(2,5);
 return 0;
  }