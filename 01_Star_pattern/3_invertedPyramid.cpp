// ****
// ***
// **
// *

#include <iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter thr value of n :"<<endl;
    cin>>n;
    for (int i = n; i >= 1; i--)
    {
        for(int j= 1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}