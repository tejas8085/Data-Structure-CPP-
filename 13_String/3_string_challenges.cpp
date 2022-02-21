#include <bits/stdc++.h>
using namespace std;

int main()
{
    //    UPPERCASE / LOWERCASE INTERCONVERSION :-

    string s = " tejasjanjire";
    // sort(s.begin(), s.end());
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    //  OR

    string s1 = "janjiretejas";
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] >= 'a' || s1[i] <= 'z')
        {
            s1[i] -= 32;
        }
    }
    cout << s1 << endl;

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] >= 'a' || s1[i] <= 'z')
        {
            s1[i] += 32;
        }
    }
    cout << s1 << endl;

    // FORM THE BIGGEST NUMBER

    string n = "7887248753493459346";
    sort(n.begin(), n.end(), greater<int>());
    cout<<n<<endl;


    //  max frequency

    string s2 = "abcaaaahuifteb";
    int a[26] ;
    for (int i = 0; i < 26; i++)
    {
        a[i] = 0;
    }
    
    

    return 0;
}