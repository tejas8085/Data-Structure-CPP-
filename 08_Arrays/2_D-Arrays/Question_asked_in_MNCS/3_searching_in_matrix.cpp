#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    int target;
    cin >> target;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (mat[i][j] == target)
            {
                found = true;
            }
        }
    }
    if (found)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
    return 0;
}