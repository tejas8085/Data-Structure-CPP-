#include <iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter the value of size of an array "<<endl;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
       for (int j = i+1; j < n; j++)
       {
           if (array[j]<array[i])
           {
              int temp = array[j];
              array[j] = array[i];
              array[i] = temp;
           }
           
       }
       
    }
    cout<<"Sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}