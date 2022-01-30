#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    /*    1. append :- Insert additional character at the end of the string
                 :- Time Complexity is o(n), where n is size of the new string
                 :- Can also be done using + operator
    */
    cout << "1. Code for append()" << endl;
    string s1 = "fam", s2 = "ily";
    s1.append(s2);
    cout << s1 << endl;

    string t1 = "Tej", t2 = "as";
    t1 += t2;
    cout << t1 << endl;
    ;

    //  2. assign() :- Assign new string by replacing previous value
    cout << "2. Code for assign()" << endl;
    string a = "tejas";
    a.assign("tejya");
    cout << a << endl;
    string m = "mahesh";
    m = "banti";
    cout << m << endl;

    // 3. at():- Returns the character at particular position
    //        :- its Time Complexity is o(1);
    cout << "3. Code fo at()" << endl;
    string p = "tejasjanjire";
    cout << p.at(3) << endl;
    cout << p[3] << endl;

    //  4. begin() :- Returns an iterator pointing to the first character
    //             :- Its Time Complexity is O(1).
    cout << "4. Code for begin()" << endl;

    //    5. clear(): Erases all the contents of the string and assign an empty string (“”)
    // of length zero. Its time complexity is O(1).
    cout << "5. Code for clear()" << endl;
    string l = "aissmscoe";
    l.clear();
    cout << l << endl;
    /*
    6. compare(): Compares the value of the string with the string passed in the
parameter and returns an integer accordingly. Its time complexity is O(N +
M) where N is the size of the first string and M is the size of the second
string.
*/
    cout << "6. Code for compare()" << endl;
    string c1 = "abc", c2 = "xyz";
    cout << c1.compare(c2) << endl;
    cout << c2.compare(c1) << endl;
    cout << c1.compare(c1) << endl;

    /*
    7. c_str(): Convert the string into C-style string (null terminated string) and returns the pointer to the C-style string. Its time complexity is O(1).
   */

    /*
    8. empty(): Returns a boolean value, true if the string is empty and false if the string is not empty. Its time complexity is O(1).
  */
    cout << "8. Code for empty()" << endl;
    string e1 = "tejas";
    e1.clear();
    if (e1.empty())
    {
        cout << "string is empty" << endl;
    }
    else
    {
        cout << "String is not empty" << endl;
    }

    /*
     9. end(): Returns an iterator pointing to a position which is next to the last
 character. Its time complexity is O(1).
 */
    /*
    10.erase(): Deletes a substring of the string. Its time complexity is O(N) where
    N is the size of the new string.
    */
    cout << "10. Code for erase()" << endl;
    string e = "codertejas";
    e.erase(5, 5);
    cout << e << endl;

    /*
    11.find(): Searches the string and returns the first occurrence of the parameter
    in the string. Its time complexity is O(N) where N is the size of the string.
    */
    cout << "11. Code for find()" << endl;
    string f = "hsfiuhwicheciyru4";
    cout << f.find("iy") << endl;

    /*
    12.insert(): Inserts additional characters into the string at a particular position.
    Its time complexity is O(N) where N is the size of the new string.
    */
    cout << "13. Code for insert()" << endl;
    string i = "tejjanjire";
    cout << i.insert(3, "as") << endl;

    /*
    13.length(): Returns the length of the string. Its time complexity is O(1).*/
    cout << "13. Code for length " << endl;
    string ln = "tehahifwcr";
    cout << ln.length() << endl;

    /*
    14.resize(): Resize the string to the new length which can be less than or
greater than the current length. Its time complexity is O(N) where N is the
size of the new string.
*/
    cout << "14. Code for resize()" << endl;
    string r = "tejasjanjire";
    r.resize(5);
    cout << r << endl;
    /*
    15.size(): Returns the length of the string. Its time complexity is O(1).
    */
    cout << "15. Code for resize" << endl;
    string si = "tejasjanjire";
    cout << si.size() << endl;

    /*
    16.substr(): Returns a string which is the copy of the substring. Its time
   complexity is O(N) where N is the size of the substring.
   */
    cout << "16. Codde for substr() " << endl;
    string su = "tejyajanjire";
    cout << su.substr(5, 7) << endl;

    /*
    17.stoi(): Returns the strings converted to int datatype.
    */
    cout << "17. Code for stoi()" << endl;
    string st = "4102";
    int x = stoi(st);
    cout << x + 2 << endl;

    // Note  1. To convert an integer to a string, we use to_string() function.
    int b = 410;
    cout << to_string(b) + "2" << endl;

    //  note 2. Sorting a string
    string z = "ifvbcmxzasjiwuionuv89428";
    sort(z.begin(), z.end());
    cout<<z<<endl;
    return 0;
}