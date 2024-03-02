
void insertAtHead(Node* &head, int d){

    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}