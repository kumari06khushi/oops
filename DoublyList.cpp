#include<iostream>
using namespace std;
class Node{
public:
 int data;
 Node* next;
 Node* prev;

   Node(int val){
 data = val;
 next=prev=NULL;
  }

};

class DoublyList{
Node* head;
Node* tail;
public:
 DoublyList(){
    head = tail = NULL;
    }
    
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head ==NULL){
           head=tail=newNode;
        }
        else{
             newNode->next = head;
             head->prev = newNode;
             head=newNode;
        }
    }

    void pop_front(){
      if(head==NULL){
cout<<"dill is empty\n";
return;
      }
       Node* temp = head;
       head = head->next;
       if(head != NULL){
        head->prev =NULL;
       }
       temp->next=NULL;
       delete temp;
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"<=>";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
 };


int main(){
DoublyList dill;
dill.push_front(1);
dill.push_front(2);
dill.push_front(3);
dill.pop_front();
dill.print();
return 0;

}
