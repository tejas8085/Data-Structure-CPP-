#include <iostream>

using namespace std;

int main(){

    int money;
    cout<<" Enter the money in your pocket ";
    cin>>money;
    if (money > 10000)
    {
      cout<<"go to *****hotel";
    }
    else if (money > 5000 )
    {
        cout<<"go to ***  hotel";

    }
    else if (money > 2000)
    {
       cout<<"go to hotel";
    }
    else
    cout<<"go to cafe";
    
    
    return 0;
}