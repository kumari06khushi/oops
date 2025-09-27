#include<iostream>
using namespace std;
int main(){
    int a=4;
    int *ptr = &a;
    cout<<"the value of a is"<<*(ptr)<<endl;

    //new keyword dynamic allocation
    //int *ptr=new int(40);
     float *ptr =new float(40.56); //new float(40.56) → creates one float and initializes it with 40.56.
                                     //new float[3] → creates an array of 3 floats, uninitialized (garbage values until you assign).
     cout<<"the value of at  adress p is"<<*(ptr)<<endl;
     int *arr= new int[3];//This creates 3 continuous boxes in memory, each able to store an int.
     arr[0]=10;
      *(arr+1)=20;
       arr[2]=30;
       //delete[] arr;
         cout<<"the value of arr[0]  is"<<arr[0]<<endl;
          cout<<"the value of arr[1]  is"<<arr[1]<<endl;
           cout<<"the value of arr[2]  is"<<arr[2]<<endl;
    return 0;
}