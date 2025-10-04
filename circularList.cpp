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

class circularList{
Node* head;
Node* tail;
public:
 circularList(){
    head = tail = NULL;
    }
 
      //insert through Head
    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(tail==NULL){
            head=tail=newNode;
            tail->next=head;
        }
        else{
         newNode->next=head;
         head=newNode;
         tail->next=head;
        }
    }
    
      //insert through Tail
     void insertAtTail(int val){
        Node* newNode = new Node(val);
        if(tail==NULL){
            head=tail=newNode;
            tail->next=head;
        }
        else{
         newNode->next=head;
         tail->next=newNode;
          tail=newNode;
        }
    }

    void print(){
        if(head==NULL)
        return;
        cout<<head->data<<" ->";
         Node* temp = head->next;

         while(temp !=head){
            cout<<temp->data <<"->";
            temp=temp->next;
         }
         cout<<temp->data<<endl;
    }
};

int main(){
    circularList cll;
    cll. insertAtHead(1);
    cll. insertAtHead(2);
    cll. insertAtHead(3);
     cll.print();

 cll. insertAtTail(9);
    cll. insertAtTail(8);
    cll. insertAtTail(6);
    cll.print();
    return 0;
}