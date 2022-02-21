#include <bits/stdc++.h>
using namespace std;

//  Code for IS power Of two
bool isPowerof2(int n)
{
    return (n && !(n & n - 1));
}

//  Code for count no of ones
int noofOnce(int n)
{

    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;

    //  Code for subsets in array
void subSet(int arr[], int n){
        for (int i = 0; i < (1 << n); i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    //   cout<<isPowerof2(76)<<endl;
    // cout << noofOnce(25) << endl;
    int arr[3] = {1,2,3};
    cout<<subSet(arr,3)<<endl;

    return 0;
}