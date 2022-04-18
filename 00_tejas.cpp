#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {

        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &x : a)
            cin >> x;
        sort(a.begin(), a.end());
        cout << a[min(k, n - 1)] << "\n";
    }

    return 0;
}