#include <iostream>

using namespace std;

//Creating node template
class Node{
    public:
    int data;
    Node* next;
};

//Printing the whole LL
void printList(Node* node){
    while(node != NULL){
        cout<<node->data<<",";
        node = node->next;
    }
}

//Adding a node to the front of the LL
void frontAdd(Node** headRef, int newData){
    Node* node = new Node;
    node->data = newData;
    node->next = (*headRef);
    (*headRef) = node;
}

//Adding a node to the back of the LL
void endAdd(Node** endRef, int newData){
    Node* node = new Node;
    node->data = newData;
    node->next = NULL;
    (*endRef) = node;
}

int main(){
    //Initializing the LL with temporary first and last node
    Node* head = new Node;
    Node* end = new Node;
    
    //Linking the nodes
    head->next = end;
    end->next = NULL;

    //Adding data to the node
    head->data = 10;
    end->data = 20;

    //Adding nodes
    frontAdd(&head, 30);
    endAdd(&end, 40);

    //Printing nodes
    cout<<"[";
    printList(head);
    cout<<"]\n";   

    return 0;
}