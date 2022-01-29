#include <iostream>

using namespace std;

int factorial(int n){
    int factorial =1;
    for (int i = 2; i <= n; i++)
    {
       factorial *= i;
    }
    return factorial;
}

int main(){

    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j <= i; j++)
       {
           cout<<factorial(i)/(factorial(i-j)*factorial(j))<<" ";
       }
       cout<<endl;
    }
    
    return 0;
}