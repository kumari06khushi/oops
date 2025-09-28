#include<iostream>
using namespace std;
  class  Baseclass{
     public:
    int var_base=12;
    
     virtual void display(){
        cout<<"1.Dispalying base class variable var_base"<<" "<<var_base<<endl;
    }
  };
 class Derivedclass: public Baseclass{
    public:
    int var_derived=67;
    void display(){
      cout<<"2.Dispalying base class variable var_base"<<" "<<var_base<<endl;
       cout<<"3.Dispalying derived class variable var_base"<<" "<<var_derived<<endl;   
    }
 };
 
  int main(){
 Baseclass* base_class_pointer; //(name of pointer -> base_class_pointer)
    Baseclass obj_base;            //(object of class Baseclass -> obj_class )
    Derivedclass obj_derived;      ////(object of class Derivedclass:  -> obj_class )
    base_class_pointer = &obj_derived;  //pointing base class pointer to derived class pointer
 base_class_pointer->display();
    return 0;
  }