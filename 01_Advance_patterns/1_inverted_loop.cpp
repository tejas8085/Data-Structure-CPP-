#include <iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n is : ";
    cin>>n;

    for (int i = 1; i <= n+1; i++)
    {
        for(int j=1;j<=n+1-i;j++){
            
            cout<<j<<" ";

        }
        cout<<endl;
    }
    
    return 0;
}