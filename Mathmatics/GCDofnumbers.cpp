/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

//we could find gcd of two numbers efficiently by using euclidean algorithm

int euclidean(int a,int b){
    while(a!=b){
        if(a<b)
        b=b-a;
        else 
        a=a-b;

    }
    return b;
}

//optimized gcd solution

int gcdofnumbers(int a,int b)
{
    if(b==0)
    return a;
    return gcdofnumbers(b,a%b);
}


int main(){
    int data;

    cin>>data;


    return 0;

}