#include <iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter Number";
    cin>>n;

    int reverse;
    while (n>0)
    {
        int lastdigit = n%10;
        reverse = 10*reverse + lastdigit;
        n = n/10;
    }
    
    cout<<reverse<<endl;
    return 0;
}