#include <iostream>
using namespace std;

void transposeMatrix(int arr[][3], int ans[][3], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            ans[j][i] = arr[i][j];
        }
    }
}

int main(){
    int a1[3][3] = {{1, 2, 3}, {4, 5, 6},{7, 8, 9}};
    int r1 = sizeof(a1) / sizeof(a1[0]);
    int c1 = sizeof(a1[0]) / sizeof(a1[0][0]);


    int ans[3][3];

    transposeMatrix(a1, ans, r1, c1);

    cout<<"The resultant matrix after transpose is : " << endl;

    for (int i = 0; i < sizeof(ans) / sizeof(ans[0]); i++) {
        for (int j = 0; j < sizeof(ans[0]) / sizeof(ans[0][0]); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}