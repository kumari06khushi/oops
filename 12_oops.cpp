#include<iostream>
using namespace std;
class point{
    int x,y;
public:

point(int a, int b){
    x=a;
    y=b;
}
void displaypoint(){
cout<<" this point is("<<x<<","<<y<<")"<<endl;
}

  };
//create a function (hint: make it is friend fuction ) which take 2 point object and compute the distance b/w those 2 object

int main(){
   point p(1,1);
   p.displaypoint();
   
     point q(2,4);
   q.displaypoint();
    return 0;
}