#include <iostream>
#include <queue>
using namespace std;

/*
 Write a program interleave the first half of the queue with second half.
Sample I/P: 4 7 11 20 5 9 Sample O/P: 4 20 7 5 11 9*/


void interleaveQueue(int arr[],int ans[], int n)
{

    queue<int> q;

    int i = 0;
    int mid = n / 2;

    for (i = 0; i < mid; i++)
    {
        q.push(arr[i]);
        q.push(arr[i + mid]);
    }

    int k = 0;
    while (!q.empty())
    {
        ans[k] = q.front();
        q.pop();
        k++;
    }

}
int main()
{
    int ip[] = {4, 7, 11, 20, 5, 9};
    int n = sizeof(ip) / sizeof(ip[0]);

    int ans[n];
    interleaveQueue(ip, ans , n);
    cout << "The interleaved queue is :";
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}