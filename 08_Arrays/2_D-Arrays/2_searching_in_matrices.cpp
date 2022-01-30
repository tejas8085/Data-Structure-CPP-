#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,m,key;
  cin>>n>>m;
  int arr[n][m];
  for (int i = 0; i < n; i++)
  {
     for(int j = 0; j<  m;j++){
         cin>>arr[i][j];
     }
  }
cin>>key;
  bool flag = false;
  for (int i = 0; i < n; i++)
  {
     for(int j = 0; j<m;j++){
         if (arr[i][j]==key)
         {
             cout<<i<<" "<<j<<endl;
             flag=true;
         }
         
     }
  }
  if (flag)
  {
      cout<<"Elemrnt is found "<<endl;
  }
  else{
      cout<<"Element does'nt foud"<<endl;
  }
  

  
  return 0;
}