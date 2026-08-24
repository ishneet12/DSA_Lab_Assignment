#include <iostream>
using namespace std;

void DiagonalMatrix()
{
    int n;

    cout << "Enter the size of array!! : " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array!! : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "the elements of array!! : " << endl;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << arr[i];
            }
            else{
                cout << 0;
            }
        }
        cout<<endl;

    }
}

void TriDiagonal(){
    int n;

    cout << "Enter the size of array!! : " << endl;
    cin >> n;

    int arr[3*n-2];
    cout << "Enter the elements of array!! : " << endl;

    for (int i = 0; i < 3*n-2; i++)
    {
        cin >> arr[i];
    }

    cout << "the elements of array!! : " << endl;
    int j = 0;
    int k = 0;
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || j-i==1 || i-j==1 && k<3*n-2)
            {
                cout << arr[k]<<" ";
                k++;
            }
            else{
                cout << 0 <<" ";
            }
        }
        cout<<endl;

    }
}
void LowerTriangularMatrix(){
    int n;

    cout << "Enter the size of array!! : " << endl;
    cin >> n;

    int arr[n*(n-1)/2];
    cout << "Enter the elements of array!! : " << endl;

    for (int i = 0; i < n*(n+1)/2; i++)
    {
        cin >> arr[i];
    }

    cout << "the elements of array!! : " << endl;
    int k = 0;

     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i>=j)
            {
                cout << arr[k]<<" ";
                k++;
            }
            else{
                cout << 0 <<" ";
            }
        }
        cout<<endl;
    }
}

void UpperTriangularMatrix(){
    int n;

    cout << "Enter the size of array!! : " << endl;
    cin >> n;

    int arr[n*(n-1)/2];
    cout << "Enter the elements of array!! : " << endl;

    for (int i = 0; i < n*(n+1)/2; i++)
    {
        cin >> arr[i];
    }

    cout << "the elements of array!! : " << endl;
    int k = 0;

     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i<=j)
            {
                cout << arr[k]<<" ";
                k++;
            }
            else{
                cout << 0 <<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    UpperTriangularMatrix();
}