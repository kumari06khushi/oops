#include<iostream>
using namespace std;
int main(){
    int a=4;
    int *ptr = &a;
    cout<<"the value of a is"<<*(ptr)<<endl;

    //new keyword dynamic allocation
    //int *ptr=new int(40);
     float *ptr =new  float(40.56);
     cout<<"the value of at  adress p is"<<*(ptr)<<endl;
     int *arr= new int[3];
     arr[0]=10;
      *(arr+1)=20;
       arr[2]=30;
       //delete[] arr;
         cout<<"the value of arr[0]  is"<<arr[0]<<endl;
          cout<<"the value of arr[1]  is"<<arr[1]<<endl;
           cout<<"the value of arr[2]  is"<<arr[2]<<endl;
    return 0;
}