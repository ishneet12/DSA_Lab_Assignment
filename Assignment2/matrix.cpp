#include<iostream>
using namespace std;

void transpose(int arr[][3] , int n , int m){

    cout<<"Matrix before transpose : "<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<<arr[i][j] <<"\t";
        }
        cout<<endl;
    }

    int mat[m][n] ;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mat[j][i] = arr[i][j];
        }
    }

    cout<<"Matrix after transpose : "<<endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<mat[i][j] <<'\t';
        }
        cout<<endl;
    }
}

void addition(int mat1[][3] ,int n1 , int m1, int mat2[][3] , int n2 , int m2){

    if(n1!=n2 || m1!=m2){
        cout << "Matrix addition is not possible!" << endl;
        return;
    }

    int ans[n1][m1];

    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            ans[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    cout<<"Matrix after addition : "<<endl;

    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
           cout<<ans[i][j] <<'\t';
        }
        cout<<endl;
    }

}

void multiplication(int mat1[][3] ,int n1 , int m1, int mat2[][3] , int n2 , int m2){
    if (m1 != n2) {
        cout << "Matrix multiplication is not possible!" << endl;
        return;
    }

    int ans[n1][m2];

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            for (int k = 0; k < m1; k++) {
                ans[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Matrix after multiplication:" << endl;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            cout << ans[i][j] << '\t';
        }
        cout << endl;
    }
}

int main(){
    int mat1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int mat2[2][3] = {
        {1, 2, 3},
        {1, 2, 3},
    };

   // addition(mat1,3,3,mat2,2,3);

   // transpose(mat1,2 ,3);

   multiplication(mat2,2,3,mat1,3,3);

    return 0;
}