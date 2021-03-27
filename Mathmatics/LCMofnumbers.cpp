/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
//iterative solution


int lcmofnumbers(int a,int b)
{
    int result=max(a,b);
    while(1){
        if((result%a==0)&&(result%b==0)){
            return result;
        }

        result++;
    }
}

int main(){
    int data;

    cin>>data;
    cout<<lcmofnumbers(5,15);


    return 0;

}