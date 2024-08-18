#include<iostream>
using namespace std;

// To run multiplication of matrices you need to comment all the above code
int main(){
    cout<<"Welcome to MATRIX Operations\n";
    int m,n;
    cout<<"Enter no. of rows: ";
    cin>>m;
    cout<<"Enter no. of columns: ";
    cin>>n;
    // Just accepting and displaing matrix
    // int matrix[m][n];
    // cout<<"\nAccepting elements of matrix"<<endl;
    // for(int i = 0; i < m; i++){
    //     for (int j = 0; j < n; j++){
    //         cout<<"Enter element at a"<<i<<j<<": ";
    //         cin>>matrix[i][j];
    //     }        
    // }
    // cout<<"\nThe matrix is:"<<endl;
    // for(int i = 0; i < m; i++){
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //Taking matrix 1
    int m1[m][n];
    cout<<"\nAccepting elements of matrix 1"<<endl;
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout<<"Enter element at a"<<i<<j<<": ";
            cin>>m1[i][j];
        }        
    }

    //Displaying matrix 1
    cout<<"\nThe matrix 1 is:"<<endl;
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
        {
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }

    /*
    */
    //Taking matrix 2
    int m2[m][n];
    cout<<"\nAccepting elements of matrix 2"<<endl;
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout<<"Enter element at a"<<i<<j<<": ";
            cin>>m2[i][j];
        }        
    }

    //Displaying matrix 2
    cout<<"\nThe matrix 2 is:"<<endl;
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
        {
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }

    //Addition of two matrix
    int addresult[m][n];
    cout<<"\nAddition of matrix 1 and matrix 2 is:"<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            addresult[i][j] = m1[i][j] + m2[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<addresult[i][j]<<" ";
        }
        cout<<endl;
    }

    //Subtraction of two matrix
    int subresult[m][n];
    cout<<"\nSubtraction of matrix 1 and matrix 2 is:"<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            subresult[i][j] = m1[i][j] - m2[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<subresult[i][j]<<" ";
        }
        cout<<endl;
    }

    //Transpose of matrix
    int tresult[n][m] = {};
    cout<<"\nTranspose of matrix 1 is:"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            // tresult[i][j] = m1[j][i];  --> only this statement will also work
            if(i == j){
                tresult[i][j] = m1[i][j];
            }
            else{
                tresult[i][j] = m1[j][i];
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<tresult[i][j]<<" ";
        }
        cout<<endl;
    }
    /* 
    */

    /*
    //Multiplication of matrix
    int m1,n1;
    cout<<"Enter no. of rows of matrix 1: ";
    cin>>m1;
    cout<<"Enter no. of columns of matrix 1: ";
    cin>>n1;
    //Taking matrix 1
    int a[m1][n1];
    cout<<"\nAccepting elements of matrix 1"<<endl;
    for(int i = 0; i < m1; i++){
        for (int j = 0; j < n1; j++){
            cout<<"Enter element at a"<<i<<j<<": ";
            cin>>a[i][j];
        }        
    }
    int m2,n2;
    cout<<"\nEnter no. of rows of matrix 2: ";
    cin>>m2;
    cout<<"Enter no. of columns of matrix 2: ";
    cin>>n2;
    //Taking matrix 2
    int b[m2][n2];
    cout<<"\nAccepting elements of matrix 2"<<endl;
    for(int i = 0; i < m2; i++){
        for (int j = 0; j < n2; j++){
            cout<<"Enter element at a"<<i<<j<<": ";
            cin>>b[i][j];
        }        
    }
    if(n1 == n2){
        int multiresult[m1][m2], sum=0;
        cout<<"\nMultiplication of matrix 1 and matrix 2 is:"<<endl;
        for(int i = 0; i < m1; i++){
            for(int j = 0; j < m2; j++){
                for(int k = 0; k < n1; k++){
                    sum += (a[i][k] * b[k][j]);
                }
                multiresult[i][j] = sum;
                sum = 0;
            }
        }
        for(int i = 0; i < m1; i++){
            for(int j = 0; j < m2; j++){
                cout<<multiresult[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"For matrix multiplication columns of matrix 1 should be equal to rows of matrix 2";
    }
    */

    // Need to setup functions for each operation
    // int choice;
    // cout<<"Welcome to MATRIX Operations\n Select an option";
    // cin>>choice;
    // switch(choice){
    //     case 1: break;
    //     case 2: break;
    //     case 3: break;
    //     case 4: break;
    //     case 5: break;
    // }
    
    return 0;
}

