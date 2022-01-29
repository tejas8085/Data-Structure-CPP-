#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int tejas[n];
    for (int i = 0; i < n; i++)
    {
        cin>>tejas[i];
    }
    
    int pd = tejas[1]-tejas[0];
    int j = 2;
    int ans = 2;
    int current = 2;
     while (j<n)
     {
         if (pd== tejas[j] - tejas[j-1])
         {
             current++;
         }
         else
         {
             pd = tejas[j] - tejas[j-1];
             current = 2;
         }
         ans = max(ans, current);
         j++;
         
     }
     cout<<ans<<endl;

    return 0;
}