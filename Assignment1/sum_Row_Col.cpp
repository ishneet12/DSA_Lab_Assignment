#include <iostream>
using namespace std;

void sum(int arr[][3], int r, int c)
{
    vector<int> sumRow(r, 0);
    vector<int> sumCol(c, 0);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sumRow[i] += arr[i][j];
            sumCol[j] += arr[i][j];
        }
    }

    cout << "Sum of each row: ";
    for (int i = 0; i < r; i++)
    {
        cout << sumRow[i] << " ";
    }
    cout << endl;

    cout << "Sum of each column: ";
    for (int j = 0; j < c; j++)
    {
        cout << sumCol[j] << " ";
    }
    cout << endl;
}

int main()
{
    int a1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int r1 = sizeof(a1) / sizeof(a1[0]);
    int c1 = sizeof(a1[0]) / sizeof(a1[0][0]);

    sum(a1, r1, c1);

    return 0;
}