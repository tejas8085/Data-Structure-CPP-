#include <iostream>

using namespace std;

int main(){

    int i= 1; 
    
    int j = 1;
    for ( i = 0; i <= 40; i++)
    {
       if (i%5 == 0)
       {
           continue;
       }
       cout<<i<<endl;
    }
    for ( j = 1; j < 50; j++)
    {
        if (j%5 == 0)
        {
            break;
        }
        cout<<j<<endl;
    }
    
     
    return 0;
}