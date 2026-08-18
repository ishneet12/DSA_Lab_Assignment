#include <iostream>
using namespace std;

void multiplyMatrices(int a1[][3], int a2[][2], int ans[][2],
                         int r1, int c1, int r2, int c2)
{
    // 0,1 -> 1,0

    if (r1 != c2)
    {
        cout << "Matrix multiplication not possible!" << endl;
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                ans[i][j] += a1[i][k] * a2[k][j];
            }
        }
    }

   
}

int main()
{

    int a1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int a2[3][2] = {{7, 8}, {9, 10}, {11, 12}};

    int r1 = sizeof(a1) / sizeof(a1[0]);
    int c1 = sizeof(a1[0]) / sizeof(a1[0][0]);

    int r2 = sizeof(a2) / sizeof(a2[0]);
    int c2 = sizeof(a2[0]) / sizeof(a2[0][0]);

    int ans[2][2];

    multiplyMatrices(a1, a2, ans, r1, c1, r2, c2);

    cout<<"The resultant matrix after multiplication is : " << endl;

    for (int i = 0; i < sizeof(ans) / sizeof(ans[0]); i++) {
        for (int j = 0; j < sizeof(ans[0]) / sizeof(ans[0][0]); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
