/*  1.5
*   Write a method to replace all spaces in a string with ‘%20’.
*/
#include<bits/stdc++.h>
using namespace std;
string solve(string s)
{
    int i, stringSize = s.size();
    string str = "";
    for(i = 0 ;i < stringSize ;i++)
    {
        if(s[i] == ' ')
        {
            str += "%20";
        }else{
            str += s[i];
        }
    }

    return str;
}
int main()
{
    string input;

    getline(cin, input);

    cout<<solve(input)<<endl;
    return 0;
}
