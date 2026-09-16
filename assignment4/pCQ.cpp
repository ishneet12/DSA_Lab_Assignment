#include <iostream>

using namespace std;
#define n 5

/*Develop a menu driven program demonstrating the following operations on simple
Queues: enqueue(), dequeue(), isEmpty(), isFull(), display(), and peek().*/

class CircularQueue
{
    int front = -1, rear = -1;
    int arr[n];

public:
    void enqueue(int val)
    {

       if((rear+1)%n==front){
        cout<<"Queue is full\n";
       }

       else{
        if (front == -1)
            {
                front = 0;
            }
            rear = (rear+1)%n;
            arr[rear] = val;
            cout << val << "is inserted in the queue\n";
       }
    }

    void dequeue(){
        if(front==-1){
            cout<<"Queue is empty\n";
        }

        else{
            cout<<arr[front]<<" is removed from the queue\n";
            if(front==rear){
                front=-1;
                rear = -1;
            }
            else{
                front = (front+1)%n;
            }
        }
    }

    void isEmpty()
    {
        if (front == -1)
        {
            cout << "Queue is empty\n";
        }
        else
        {
            cout << "Queue is not empty\n";
        }
    }

    void isFull(){
        if((rear+1)%n==front){
            cout<<"Queue is full\n";
        }
        else{
            cout<<"Queue is not full\n";
        }
    }

    void display(){
        if(front==-1){
            cout<<"Queue is empty\n";
        }

        else{
            cout<<"Queue elements are :";

            int i = front;

            while(true){
                cout<<arr[i]<<" ";

                if(i==rear){
                    break;
                }
                else{
                    i=i+1%n;
                }
            }
            cout<<endl;
        }
    }

    void peek()
    {
        if (front == -1)
        {
            cout << "Queue is empty\n";
        }
        else
        {
            cout << "The front element of the queue is : " << arr[front] << "\n";
        }
    }

};

int main()
{
    CircularQueue q;
    int choice, value;

    do
    {
        cout << "\n----- QUEUE MENU -----\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Is Empty\n";
        cout << "4. Is Full\n";
        cout << "5. Display\n";
        cout << "6. Peek\n";
        cout << "7. Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to enqueue : ";
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
            q.display();
            break;

        case 6:
            q.peek();
            break;

        case 7:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 7);

    return 0;
}
