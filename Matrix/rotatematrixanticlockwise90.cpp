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
 
   
    //rotate matrix in anti clockwise 90
    cout<<"matrix rotation in anti clock wise 90"<<endl;
    //to solve above question we need to first find transpose and then reverse each column
     for(int i=0;i<row;i++){
        for(int j=i+1;j<column;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    
    for(int i=0;i<column;i++){
        int low=0,high=row-1;
        while(low<high){
            swap(arr[low][i],arr[high][i]);
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
