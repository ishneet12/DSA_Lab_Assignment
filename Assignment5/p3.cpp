#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};


void findMiddle(Node **head){
    if(head==nullptr || *head==nullptr){
        cout<<"List is empty , nothing to find\n";
        return;
    }

    Node *slow = *head;
    Node *fast = *head;

    while(fast!=nullptr && fast->next!=nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }

    cout<<"Middle node is : "<<slow->data<<"\n";
}

int main(){
    int n;
    cout<<"Enter the number of nodes in the list : ";
    cin>>n; 
    Node *head = nullptr;
    head = new Node(1);
    Node *cur = head;
    for(int i=2;i<=n;i++){
        cur->next = new Node(i);
        cur = cur->next;    
}
    findMiddle(&head);
    return 0;
}