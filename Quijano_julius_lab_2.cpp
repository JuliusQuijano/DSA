#include <iostream>

 using namespace std;
 typedef struct Node{
    string songName;
    Node *link;
 }Node;

 Node *createNode(string data){
    Node *newNode = new Node;
    newNode->songName = data;
    newNode->link = NULL;
    
    return newNode;
 }
 
 void traverse(Node *head){
    Node *temp = new Node;
    temp = head;

    cout << "My playlist" <<endl;
    while(temp !=NULL){
        cout << temp->songName<< "->"<<endl;
        if(temp->link == NULL){
            cout << "NULL"<<endl;
        }
        temp = temp->link;
    
    }
}
Node *insertAtTheEnd(string data, Node *head){
    if(head == NULL){
        Node *newNode = createNode(data);
        head = newNode;
        cout << "A new node has been inserted at the end \n" <<endl;
        return head;
    }
    Node *temp = new Node;
    temp = head;

    while(temp->link != NULL){
        temp = temp->link;
    }   
    Node *NewNod = createNode(data);
    temp->link =  new Node;

    cout << "a new node has been inserted at the end \n" << endl;
    return head;
}
 Node *InsertAtTheBeginning(string data, Node *head){
    Node * newNode = createNode(data);
    newNode->link = head;

    head = newNode;

    cout << "A new node has been inserted at the beginning \n" <<endl;

    return head;
 }

 int main(){
    Node *head = createNode("Senctuary by joji");
    traverse(head);
    

 
 return 0;

 }
