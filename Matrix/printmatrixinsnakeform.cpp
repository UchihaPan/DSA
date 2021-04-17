/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

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
    //print matrix in snake form
    cout<<"matrix in snake form is"<<endl;
    for(int i=0;i<row;i++){
       
            if(i%2==0){
            for(int j=0;j<column;j++){
                cout<<arr[i][j]<<"";
                
            }
            }else{
                for(int j=column-1;j>=0;j--){
                cout<<arr[i][j]<<"";
            }
                
            }
            
        
    }

    return 0;
}
