
#include <iostream>

using namespace std;

int main(){

    int a = 3, b = 7;
    cout<<"the value of the a + b is : "<<a + b<<endl;
    cout<<"the value of the a - b is : "<<a - b<<endl;
    cout<<"the value of the a * b is : "<<a * b<<endl;
    cout<<"the value of the a / b is : "<<a / b<<endl;
    cout<<"the value of the a++ is : "<<a++<<endl;
    cout<<"the value of the ++a is : "<<++a<<endl;
    cout<<"the value of the a-- is : "<<a--<<endl;
    cout<<"the value of the --a is : "<<--a<<endl<<endl;

    int x,  c = 6;
    x = a - ++b * c--;
    cout<<"The value of a - ++b * c--"<<x;
    return 0;
}