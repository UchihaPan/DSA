/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
//iterative solution
int countdigits(int element){
    int counter=0;
    if(element==0)
    return 1;
    
    while(element!=0){
        element=element/10;
        counter++;
    }

    return counter;
}

//recursive solution

int rcountdigits(int element){
    if(element==0)
    return 0;
    return 1+rcountdigits(element/10);
}
int main(){
    int data;

    cin>>data;
  cout<<countdigits(data);
  cout<<rcountdigits(data);

    return 0;

}