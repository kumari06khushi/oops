#include<iostream>
using namespace std;

class Employee {
 int id;
 int salary;

 public:
void setId(void){
    salary=120; 
    cout<<"enter the id of employee is"<<endl;
    cin>>id;
}
void getId(void){
    cout<<" the id of employee is"<<" "<<id<<endl;    
}
  };

int main() {
// Employee A,B,C;
// A.setId();
// A.getId();
Employee FB[4];
for(int i=0;i<4;i++){
FB[i].setId();
FB[i].getId();
}
   return 0;
}