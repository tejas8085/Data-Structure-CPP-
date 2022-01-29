#include <iostream>
using namespace std;

int main(){
    char button ;
    cout<<"Enter your choice ";
    cin>>button;
   
    switch (button)
    {
    case 'm':
        cout<<"good morning";
        break;
    case 'a':
        cout<<"good afternoon";
        break;
    case 'n':
        cout<<"good night";
        break;
    case 'h':
        cout<<"hello !!";
        break;
    case 'b':
        cout<<"bbyee";
        break;
    case 's':
        cout<<"namste";
        break;
    
    default:
        break;
    }
    return 0;
}