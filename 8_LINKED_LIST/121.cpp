#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this ->next = NULL;
    }

    //destructor
    ~Node(){
        //memory free
        if (this -> next != NULL){
            delete next;
            this -> next = NULL;
        }    
    }

};

void insertAtHead(Node* &tail, Node* &head, int d){
    //empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
    }


}

void insertAtTail(Node* &head, Node* &tail, int d){
        //empty list
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = tail;
        tail = temp;
    }

}

void insertAtAnyPosition(Node* &head, Node* &tail, int position, int d){
    if(position == 1){
        insertAtHead(tail,head,d);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count<position-1){
        temp = temp -> next;
        count++;
    }
    if(temp->next=NULL){
        insertAtTail(head, tail, d);
    }
    Node* nodeToInsert = new Node(30);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

void deleteNode(Node* head, int position){
    //deleting first node
    if(position==1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }

    // deleting any middle node or last node
    Node* current = head;
    Node* previous = head;

    int count = 1;
    while(count < position){
        previous = current;
        current = current -> next;
        count++;
    }
    previous -> next = current -> next;
    current -> next = NULL;
    delete current;

}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
   // cout<<endl;
}


int main(){
 
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(tail, head, 15);
    print(head);
    insertAtTail(head, tail, 20);
    print(tail);
    insertAtTail(head, tail, 21);
    print(tail);
    cout<<endl;
    insertAtAnyPosition(head,tail, 1, 30);
    print(head);
    cout<<endl;
    deleteNode(head, 2);
    print(head);


return 0;
}