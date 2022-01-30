#include <bits/stdc++.h>
using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int n;
    cin >> n;
    char arr[n];
    cin >> arr;
    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
        }
    }
    if (check)
    {
        cout << arr << " is a palindrome" << endl;
    }
    else
    {
        cout << arr << " is a NOT palindrome" << endl;
    }

    return 0;
}