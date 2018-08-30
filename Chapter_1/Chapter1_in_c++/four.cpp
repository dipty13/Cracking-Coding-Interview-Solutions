/*  1.4
*   Write a method to decide if two strings are anagrams or not.
*/
#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string str1,string str2)
{
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    return str1 == str2;
}
int main()
{
    string input1 ,input2;
    cin>>input1>>input2;
    cout<<((isAnagram(input1,input2) == 1)? "True" : "False")<<endl;
    return 0;
}
