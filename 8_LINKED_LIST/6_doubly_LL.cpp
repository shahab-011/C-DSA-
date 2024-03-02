#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    //constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }

    //detructor
    ~Node(){
        //memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void getLength(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }
    cout<<count;
}

void insertAtHead(Node* &tail,Node* &head, int d){

    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
    
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }


}

void insertAtTail(Node* &head, Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
            
        Node* temp = new Node(d);

        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }


}

void insertAtAnyPosition(Node* &head, Node* &tail, int position, int d){
    if(position==1){
        insertAtHead(tail, head,d);
        return;
    }

    Node* temp = head;

    int count = 1;
    while(count<position-1){
        temp = temp -> next;
        count++;
    }
    if(temp -> next == NULL){
        insertAtTail(head, tail, d);
        return;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(Node* &head, int position){
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }

    
}

int main(){
  
 
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    //getLength(head);
    insertAtHead(tail, head,15);
    print(head);

    insertAtHead(tail, head,20);
    print(head);

    insertAtHead(tail, head,30);
    print(head);

    insertAtTail(head, tail,50);
    print(head);

    insertAtAnyPosition(head, tail, 3, 60);
    print(head);

    deleteNode(head, 2);
    


return 0;
}