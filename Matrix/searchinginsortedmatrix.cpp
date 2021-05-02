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

    int row,column,value;
    
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
 
   cin>>value;
   //searching in sorted matrix
   int i=0,j=column-1;
   while(j>=0 && i<row){
       if(arr[i][j]==value){
              cout<<"value find at "<< i<<" "<<"row and "<<j<<"column "<<endl; 
              break;
       }
       if(arr[i][j]>value){
           j--;
       }else{
           i++;
       }
       
   }
 

    return 0;
}
