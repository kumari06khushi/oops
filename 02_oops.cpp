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


#include<iostream>
using namespace std;

class binary
{
    string s;

    public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
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
void binary :: ones_compliment(void){
    for (int i = 0; i <s.length(); i++)
    {
       if(s.at(i)=='0'){
       s.at(i)='1';
       }
    else{
       s.at(i)='0';
       }
    }
    
}
void binary ::display(void){
    cout<<"Displaying your binary number is =";
    for (int i = 0; i <s.length(); i++)
    {
      cout<< s.at(i);
      
    }
    
}

int main(){
binary b;
b.read();
b.chk_bin();
b.ones_compliment();
b.display();
    return 0;
}