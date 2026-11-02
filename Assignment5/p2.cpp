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

void cntdelete(Node **head, int key)
{
    if (*head == nullptr)
    {
        cout << "List is empty , nothing to delete\n";
        return;
    }

    Node *cur = *head;
    Node *prev = nullptr;
    int cnt = 0;
    while (cur != nullptr)
    {
        if (cur->data == key)
        {
            if (prev == nullptr)
            {
                *head = cur->next;
            }
            else
            {
                prev->next = cur->next;
            }
            cnt++;
            cur = cur->next;
        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
    }

    cout << "Deleted " << cnt << " nodes with key " << key << "\n";
}

void display(Node **head)
{
    Node *cur = *head;

    while (cur != nullptr)
    {
        cout << cur->data << "->";
        cur = cur->next;
    }
    cout << "NULL\n";
}

int main()
{

    Node *head = nullptr;
    head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    display(&head);
    cntdelete(&head, 2);

    display(&head);
}