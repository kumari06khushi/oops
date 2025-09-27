#include<iostream>
using namespace std;
class shop {
int id;
float price;
public:
 void setdata(int a,float b){
    id=a;
    price=b;
 }
 void getdata(void){
    cout<<"code of this item is"<<" "<<id<<endl;
     cout<<"price of this item is"<<" "<<price<<endl;
 }
};

int main(){
   int size=3;
  // int *p=&size; 
   //int *p=new int[34];
   //general store
   //veggies
   //hardware
   shop *p=new shop[size];
   shop *pTemp=p;
   int i,j;
   float pr;
   for(j=0;j<size;j++){
    cout<<"enter the price and id of the item"<<j+1<<endl;
    cin>>i>>pr;

    p->setdata(i,pr);
    p++;
   }

   for(j=0;j<size;j++){
    cout<<"Item no"<<j+1<<endl;
     pTemp->getdata();
    pTemp++;
   }
     
    return 0;
}