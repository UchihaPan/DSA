/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int row,column;
    
    cin>>row>>column;
    
    int arr[row][column];
    
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
           cin>> arr[i][j];
        }
    }
    
    cout<<"you inputted values are "<<endl;
      for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
           cout<< arr[i][j]<<" ";
        }
    }
    cout<<endl;
 
    //transpose of matrix
    cout<<"transpose of matrix is "<<endl;
    for(int i=0;i<row;i++){
        for(int j=i+1;j<column;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
     for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
           cout<< arr[i][j]<<" ";
        }
    }
    cout<<endl;

    return 0;
}
