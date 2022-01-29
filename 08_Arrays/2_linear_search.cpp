#include <iostream>

using namespace std;

int linearSearch(int array[], int n, int key){
    
    for (int i = 0; i < n; i++)
    {
       if (array[i]==key)
       {
           return i;
       }
       
    }
    return -1;
 
}

int main(){

    int n, key;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    cout<<"enter the "<<n<<" values in arrays"<<endl;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" "<<endl;
    }

    cout<<"Enter the key "<<endl;
    cin>>key;
    cout<<"The position of "<<key <<" is "<<linearSearch(array, n, key)<<endl;
    return 0;
}