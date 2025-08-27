#include<iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];     //private
    int counter;

 public:
    void initCounter(void) { counter = 0;}
    void setPrice(void);
    void displayPrice(void);

};
 void shop:: setPrice(void) {
    cout<<"Enter id of your item no "<<counter + 1 <<endl;
    cin>>itemId[counter];
    cout<<"Enter price of your item"<<endl;
      cin>>itemPrice[counter];
      counter ++;
 }
 void shop::displayPrice(void){
  for(int i=0; i< counter;i++) 
  cout<<"the price of item with Id"<<itemId[i]<<"is"<<itemPrice[i]<<endl; 
 }

int main() {
shop dukan;      //make object
dukan.initCounter();
dukan.setPrice();
dukan.setPrice();  //3 bar  id or price k set krne bolta h qki tha 3 times dukan.setprice likhe h
dukan.setPrice();
dukan.displayPrice();
return 0;
}