#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10;
    int *ptr = &a;

    cout << *ptr << endl;
    *ptr = 29;
    cout << a << endl;

    //    ARRAYS IN POINTERS
    int arr[] = {1, 2, 3};
    cout << *arr << endl;

    int *aptr = arr;
    for (int i = 0; i < 3; i++)
    {
        cout<< *(arr+i)<<endl;
    }
    

    //  SWAPPING VARIABLES USING ADDRESS

    int p=4;
    int q=5;
    swap(p,q);
    cout<<p<<" "<<q<<endl;
    return 0;
}