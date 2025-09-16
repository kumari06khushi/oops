#include<iostream>
using namespace std;
//desctructor never take an argumnent nor does it return any value
class num{
    int count=0;
 public:
  num(){
   count++;
    cout<< "this is time when contructor is called for object number"<<count<<endl;
  }
  ~num(){
 cout<<"this is time when destructor is called for object number"<<count<<endl;
 count--;
  }
};

int main(){
    cout<<"we are inside our main function"<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;{
        cout<<"entring this block"<<endl;
        cout<<"creating two more object"<<endl;
        num n2,n3;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to main"<<endl;
    return 0;
}