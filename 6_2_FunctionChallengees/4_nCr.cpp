#include <iostream>

using namespace std;

int factorial(int n){
    int factorial=1;
    for( int i = 2; i <= n ; i++)
    {
        factorial *= i;
    }
    
    return factorial;
    
}

int main(){

    int n,r;
    cout<<"Enter the value of n and r  : "<<endl;
    cin>>n>>r;
    int result = factorial(n)/(factorial(n-r)*factorial(r));
    cout<<"The value of nCr of "<<n<<"C"<<r<<" is "<<result<<endl;
    return 0;
}