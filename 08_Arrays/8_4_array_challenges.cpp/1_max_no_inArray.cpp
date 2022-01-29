#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n], mx;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        mx = max(arr[i], arr[i+1]);
    }
    cout<<mx;
    

    return 0;
}