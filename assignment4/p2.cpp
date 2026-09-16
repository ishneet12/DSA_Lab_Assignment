include <iostream>

using namespace std;
#define n 5

/*Develop a menu driven program demonstrating the following operations on simple
Queues: enqueue(), dequeue(), isEmpty(), isFull(), display(), and peek().*/

class Queue
{
    int front = -1, rear = -1;
    int arr[n];

public:
    void enqueue(int val)
    {
        if (rear == n - 1)
        {
            cout << "Queue is full\n";
        }
        else
        {
            if (front == -1)
            {
                front = 0;
            }
            rear++;
            arr[rear] = val;
            cout << val << "is inserted in the queue\n";
        }
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty\n";
        }
        else
        {
            cout << arr[front] << " is removed from the queue\n";
            front++;
        }
    }

    void isEmpty()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty\n";
        }
        else
        {
            cout << "Queue is not empty\n";
        }
    }

    void isFull()
    {
        if (rear == n - 1)
        {
            cout << "Queue is full\n";
        }
        else
        {
            cout << "Queue is not full\n";
        }
    }

    void peek()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty\n";
        }
        else
        {
            cout << "The front element of the queue is : " << arr[front] << "\n";
        }
    }

    void display()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty\n";
        }
        else
        {
            cout << "Elements in the queue are : ";
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
};

int main(){
    Queue q;
    int choice, value;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Check if Queue is Empty\n";
        cout << "4. Check if Queue is Full\n";
        cout << "5. Peek\n";
        cout << "6. Display\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.isEmpty();
            break;
        case 4:
            q.isFull();
            break;
        case 5:
            q.peek();
            break;
        case 6:
            q.display();
            break;
        case 7:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}
