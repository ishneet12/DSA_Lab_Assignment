#include <iostream>
using namespace std;

int main()
{

    int arr[100];
    int n;
    int choice;

    do
    {
        cout << "Enter your choice" << endl;
        cout << "1. CREATE" << endl;
        cout << "2. DISPLAY" << endl;
        cout << "3. INSERT" << endl;
        cout << "4. DELETE" << endl;
        cout << "5. LINEAR SEARCH" << endl;
        cout << "6. EXIT" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the number of elements: ";
            cin >> n;
            cout << "Enter the elements: ";
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            break;

        case 2:
            if (n == 0)
            {
                cout << "Array is empty!" << endl;
            }
            else
            {
                cout << "Array elements are: ";
                for (int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            break;

        case 3 :
            if (n == 100)
            {
                cout << "Array is full!" << endl;
            }
            else
            {
                int pos, value;
                cout << "Enter the position to insert (0 to " << n << "): ";
                cin >> pos;
                if (pos < 0 || pos > n)
                {
                    cout << "Invalid position!" << endl;
                }
                else
                {
                    cout << "Enter the value to insert: ";
                    cin >> value;
                    for (int i = n; i > pos; i--)
                    {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = value;
                    n++;
                    cout << "Element inserted!" << endl;
                }
            }
            break;
        
        case 4:
            if (n == 0){
                cout <<"Array is Empty!"<<endl;
            }

            else{
                int pos;
                cout << "Enter the position to delete (0 to " << n-1 << "): ";
                cin >> pos;
                if(pos<0 || pos>=n){
                    cout << "INVAID POSITION!"<<endl;
                }

                for(int i=pos;i<n-1;i++){
                    arr[i]=arr[i+1];
                }
                n--;
                cout << "Element deleted!"<<endl;
            }

        case 5:
            if(n==0){
                cout << "Array is Empty!" <<endl;
            }

            else{
                int val ;
                cout << "Enter the value to search : ";
                cin >> val;
                bool flag = false;

                for(int i=0;i<n;i++){
                    if(arr[i]==val){
                        cout << "Element found at position : "<<i<<endl;
                        flag = true;
                        break;
                    }
                }
                if(!flag){
                    cout << "Element not found!" << endl;
                }
            }
        case 6 :
            cout << "Exiting..." << endl;
            break;
        }

    } while (choice != 6);

    return 0;
}