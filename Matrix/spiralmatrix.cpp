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
 
   
   //spiral matrix 
   cout<<"spiral matrix "<<endl;
   int top=0,left=0,right=column-1,bottom=row-1;
   int direction=0;
  // int i;
   while(left<=right && top<=bottom){
       if(direction==0){
           for(int i=top;i<=right;i++){
               cout<<arr[top][i];
           }
           top++;
       }
       
      else if(direction==1){
          for(int i=top;i<=bottom;i++){
              cout<<arr[i][right];
          }
          right--;
      }
      else if(direction==2){
          for(int i=right;i>=left;i--){
              cout<<arr[bottom][i];
          }
          bottom--;
      }
      else if(direction==3){
          for(int i=bottom;i>=top;i--){
              cout<<arr[i][left];
          }
          left++;
      }
      
      
      direction=(direction+1)%4;
       
       
   }
    return 0;
}
