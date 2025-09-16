#include<iostream>
using namespace std;

//Base class
class employee {
    public:
int id;
float salary;

employee (int inpId){
id=inpId;
salary =34.0;
}
employee(){}
};
//Derive class syntax
/* 
class {{derived-class-name}}:{{visibility-mode}} {{base-case-name}}
{
 class members/method/etc...
 }
  Note:
   1. default visibility mode is private
   2.public vsibility mode: public member of the base class become public member of the derived class.
   3. private vsibility mode: public member of the base class become private member of the derived class.
   4. private member never inheritated.
*/
 // creating a programmer class derived from employee base class

 class programmer : employee{
    public: 
    programmer(int inpId){
    id =inpId;
    }
    int languagecode =9;
    void getdata(){
        cout<<id<<endl;
    }
 };

int main(){
employee khushi(1), ritik(2);
cout<<khushi.salary<<endl;
cout<<ritik.salary<<endl;
programmer skillF(1);
cout<<skillF.languagecode<<endl;
skillF.getdata();
    return 0;
}