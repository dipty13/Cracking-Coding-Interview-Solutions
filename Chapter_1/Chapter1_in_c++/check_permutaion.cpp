/*  1.2  Check Permutation
*   Given two strings, write a method to decide if one is a permutation of the
* other.
*/
#include<bits/stdc++.h>
using namespace std;
bool isPermutaion2(string s1, string s2){
    //Time complexity: O(n) , space complexity: O(n)
    map<char, int> m;
    for(char c: s1){
        m[c]++;
    }
    for(char c: s2){
        m[c]--;
        if(m[c] < 0){
            return false;
        }
    }
    return true;
}
bool isPermutaion(string s1, string s2){
    //Time complexity: O(nlog(n)) , space complexity: O(1)
    if(s1.size() != s2.size())
        return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if(isPermutaion2(s1, s2)){
         cout<<"Yes\n"<<endl;
    }else{
         cout<<"No\n"<<endl;
    }

    return 0;
}
