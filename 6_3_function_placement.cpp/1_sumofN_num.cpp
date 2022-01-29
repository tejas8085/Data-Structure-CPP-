#include <iostream>

using namespace std;

int sum(int n){
    int result = 0;
    for (int i = 0; i <= n ; i++)
    
        result += i;
    
    return result;
}

int main(){

    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;

    int result = sum(n);
    cout<<"The sum of the first "<<n<<" natural numbers is "<<result<<endl;
    return 0;
}