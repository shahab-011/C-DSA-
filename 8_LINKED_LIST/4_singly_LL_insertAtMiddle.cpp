#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL; 
    }
};


void insertAtHead(Node* &head, int d){

    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}


void insertAtTail(Node* &tail, int d){

    //new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail=temp;

}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    // insert at Start
    if(position==1){
        insertAtHead(head , d);
        return;
    }
   
    Node* temp = head;

    int count = 1;
    while(count < position-1){
        temp = temp -> next;
        count++;
    }

    if(temp -> next = NULL){
        insertAtTail(tail,d);
        return;
    }

    //creating node for d
    Node* nodeToinsert = new Node(d);
    nodeToinsert -> next = temp -> next;
    temp -> next = nodeToinsert;

}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }

    cout<<endl;


}

int main(){
    Node* node1 = new Node(5);


    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 10);
    print(head); 
  
    insertAtTail(tail, 15);
    print(head);

    insertAtTail(tail, 20);
    print(head);
    
    insertAtPosition(tail, head, 2, 25);
    print(head);

   // cout<<"Head:"<<head -> data<<endl;
    //cout<<"Tail:"<<tail -> data<<endl;





return 0;
}