#include<iostream>
using namespace std;

class binary
{
    string s;

    public:
    void read(void);
    void chk_bin(void);
};
void binary :: read(void){
    cout<<"enter a binary number"<<endl;
    cin>>s;
}
void binary ::chk_bin(void){
    for (int i = 0; i <s.length(); i++)
    {
       if(s.at(i)!='0'  && s.at(i)!='1'){
        cout<<"Incorrect binary formate"<<endl;
        exit(0);
       }
    }
    
}
int main(){
//  oops-classes and objects
// c++ --> initially called --> c with class by stroustroup
// class --> extension of structure (in c)
//  classes --> structure had limitation
//     -members are public
//     -no methods
//     classes --> structure + more
//     classes --> can have method and properties.
//             --> can make few member as private and few as public.
// structure in c++ are typedefed
// you can declare object alomg with the class declation like this:
// /* class Employee{
//  class deffination 
//  } khushi, name2,name3;*/
//   khushi.salary= 8 make no sense if salary is private.

// Nexting of member functions
binary b;
b.read();
b.chk_bin();
    return 0;
}