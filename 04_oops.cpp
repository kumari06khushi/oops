#include<iostream>
using namespace std;

class Employee {
    int id;
static int count;
    public:

    void setdata(void){
        cout<< "enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
cout<<"the id of this employee is = "<< id <<" " << "and this is employee number is =" << " " <<count<<endl;
    }
    //static function
    static void getcount(void){
       // cout<<id; show error
        cout<<"the value of count is ="<< " "<<count<<endl;
    }

};
 int Employee::count;    //defoult value is zero //if we want to start count from 1000 then here we write (int Employee::count 1000;)
int main() {
    //count is ststic data member of class employee
Employee khushi,rohan,lovish;
 
khushi.setdata();
khushi.getdata();
Employee::getcount();

rohan.setdata();
rohan.getdata();
Employee::getcount();

lovish.setdata();
lovish.getdata();
Employee::getcount();

    return 0;
}