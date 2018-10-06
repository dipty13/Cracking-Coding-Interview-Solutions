/*  1.8
*   Assume you have a method isSubstring which
*   checks if one word is a substring of another.
*   Given two strings, s1 and s2, write code to check
*   if s2 is a rotation of s1 using only one call
*   to isSubstring (i.e., “waterbottle” is a rotation of “erbottlewat”).
*/
#include<bits/stdc++.h>
using namespace std;
bool isSubstring(string str1, string str2)
{
    return str1.find(str2) != std::string::npos;
}
bool solve(string str1, string str2)
{
    int len = str1.length();

    if(len == str2.length() || len > 0)
    {
        string str = str1 + str1;
        return isSubstring(str, str2);
    }
    return false;
}
int main()
{
    string str1, str2;
    cin>>str1>>str2;
    cout<<(solve(str1,str2) == 1 ? "true" : "false" )<<endl;

    return 0;
}
