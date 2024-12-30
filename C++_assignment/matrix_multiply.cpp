#include <iostream>
using namespace std;

int main() {
        int rows1,cols1,rows2,cols2;
        //Input matrix dimensions
        cout<<"Enter the dimensions of Matrix 1 (rows and columns): ";
        cin>>rows1>>cols1;
        cout<<"Enter the dimensions of Matrix 2 (rows and columns): ";
        cin>>rows2>>cols2;
        // Check if multiplication is possible
        if(cols1!=rows2){
                cout << "Matrix multiplication not possible. Columns of Matrix 1 must equal rows of Matrix 2." << endl;
                return 0;
        }
        // Declare matrices
        int matrix1[rows1][cols1],matrix2[rows2][cols2];
        long long result[rows1][cols2]; //Declare the result matrix
        for(int i=0;i<rows1;i++){
                for(int j=0;j<cols2;j++){
                        result[i][j]=0;
                }
        }
        // Input Matrix 1
        cout<<"Enter elements of Matrix 1:"<<endl;
        for(int i=0;i<rows1;i++){
                for(int j=0;j<cols1;j++){
                        cin>>matrix1[i][j];
                }
        }
        // Input Matrix 2
        cout << "Enter elements of Matrix 2:" << endl;
        for(int i=0;i<rows2;i++){
                for(int j=0;j<cols2;j++){
                        cin>>matrix2[i][j];
                }
        }
        // Perform matrix multiplication
        for(int i=0;i<rows1;i++) {
                for(int j=0;j<cols2;j++) {
                        for(int k=0;k<cols1;k++) {
                                result[i][j]+=static_cast<long long>(matrix1[i][k])* matrix2[k][j]; 
                        }
                }
        }
        cout<<"Resultant Matrix:"<<endl;
        for(int i=0;i<rows1;i++){
                for(int j=0;j<cols2;j++){
                        cout<<result[i][j]<<" ";
                }
                cout<<endl;
        }
        return 0;
}

