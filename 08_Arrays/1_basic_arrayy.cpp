#include <iostream>

using namespace std;

int main(){
    
    //1 st way 
    // int array[5] = {34, 45, 67, 89, 32};
    
    // 2nd WAY

    // int array[5] ;
    // array[0] = 34;
    // array[1] = 45;
    // array[2] = 67;
    // array[3] = 89;
    // array[4] = 32;

    //  3rd WAY
    int n;
    
    int array[n];
    cout<<"Enter the value of size of an array"<<endl;         
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    

    // cout<<array[0]<<endl;
    // cout<<array[1]<<endl;
    // cout<<array[2]<<endl;
    // cout<<array[3]<<endl;
    // cout<<array[4]<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<endl;
    }
    
    return 0;
}