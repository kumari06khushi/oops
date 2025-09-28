  //polymorphism in c++ is two type
    // -one name and multiple forms
      // - eg function overloading, operator overloading, virctual overloading
      // polymorphism

     // 1.  compile time polymorphism
     // 1.1 function overloading
      // 1.2 operator overloading

     // 2. Run time polymorphism
     // 2.1 virctual overloading
 #include<iostream>
using namespace std;
  class  Baseclass{
    public:
    int var_base;
    
    void display(){
        cout<<"1.Dispalying base class variable var_base"<<" "<<var_base<<endl;
    }
  };
 class Derivedclass: public Baseclass{
    public:
    int var_derived;
    void display(){
      cout<<"2.Dispalying base class variable var_base"<<" "<<var_base<<endl;
       cout<<"2.Dispalying derived class variable var_base"<<" "<<var_derived<<endl;   
    }
 };
int main(){
    Baseclass* base_class_pointer; //(name of pointer -> base_class_pointer)
    Baseclass obj_base;            //(object of class Baseclass -> obj_class )
    Derivedclass obj_derived;      ////(object of class Derivedclass:  -> obj_class )
    base_class_pointer = &obj_derived;  //pointing base class pointer to derived class pointer

    base_class_pointer->var_base=34;
   // base_class_pointer->var_derived=134;  will through error
    base_class_pointer->display();

      Derivedclass* derived_class_pointer;
    derived_class_pointer=&obj_derived;
    derived_class_pointer->var_base=13;
      derived_class_pointer->var_derived=1340;
      derived_class_pointer->display();
    return 0;
}