/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
//iterative solution
int factorial(int element){
    int result=1;
    for(int i=2;i<=element;i++){
        result=result*i;
    }
    return result;
    
}

//recursive solution

int rfactorial(int element){
    if(element==1)
    return 1;
    return element*rfactorial(element-1);
}


int main(){
    int data;

    cin>>data;
  cout<<factorial(data);
  cout<<rfactorial(data);

    return 0;

}