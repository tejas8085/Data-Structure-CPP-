#include <iostream>

using namespace std;

int binarySearch(int array[], int n, int key){
    int s=0;
    int e=n;

    while (s<=e)
    {
        int mid = (s+e)/2;

        if (array[mid]==key)
        {
            return mid;
        }
        else if (array[mid]>key)
        {
             e = mid-1;
        }
        else 
        {
             s = mid + 1;
        }
        
    }
    return -1;
}

int main(){

    int n, key;
    cout<<"Enter the value of size of array "<<endl;
    cin>>n;
    cout<<"Enter the key "<<endl;
    cin>>key;

    int array[n];
    cout<<"Enter the elements in the array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
  cout<<"\nThe position of "<<key<<" is "<< binarySearch(array, n, key);
    return 0;
}