#include <iostream>

using namespace std;

bool check(int a, int b, int c)
{
    int x = max(a, max(b, c));
    int y, z;

    if (x == a)
    {
        y == b;
        z == c;
    }
    else if (x == b)
    {
        y == a;
        z == c;
    }
    else
    {
        y == a;
        z == b;
    }
    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int a, b, c;
    cout << "Enter the three numbers : " << endl;
    cin >> a >> b >> c;
    if (check(a, b, c))
    {
        cout << "Pythagorean Triplet" << endl;
    }
    else
    {
        cout << "Not Pythagorean Triplet"<<endl;
    }

    return 0;
}