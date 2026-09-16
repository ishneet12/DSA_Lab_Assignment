#include <iostream>
#include <queue>
using namespace std;

class stackUsing1Queue
{

    queue<int> q;

public:
    void push(int x)
    {
        q.push(x);

        int n = q.size();

        for (int i = 0; i < n - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    void pop()
    {
        if (q.empty())
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            q.pop();
        }
    }

    void peek()
    {
        if (q.empty())
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            cout << q.front() << endl;
        }
    }

    void isEmpty()
    {
        if (q.empty())
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            cout << "stack is not empty" << endl;
        }
    }
};

class stackUsing2Queue
{

    queue<int> q1;
    queue<int> q2;

public:
    void push(int x)
    {
        q1.push(x);

        int n = q1.size();

        for (int i = 0; i < n - 1; i++)
        {
            q2.push(q1.front());
            q1.pop();
        }

        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }

    void pop()
    {
        if (q1.empty())
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            q1.pop();
        }
    }

    void peek()
    {
        if (q1.empty())
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            cout << q1.front() << endl;
        }
    }

    void isEmpty()
    {
        if (q1.empty())
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            cout << "stack is not empty" << endl;
        }
    }
};

int main()
{

    stackUsing1Queue s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.peek();

    s.pop();
    s.peek();

    s.isEmpty();

    stackUsing2Queue s1;

    s1.push(100);
    s1.push(200);     
    s1.push(300);

    s1.peek();
    s1.pop();
    s1.peek();
    s1.isEmpty();
    s1.pop();
}