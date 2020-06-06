/*  1.4 Palindrome Permutation
*  Given a string, write a function to check if it is a permutation of a palindrome.
* A palindrome is a word or phrase that is the same forwards and backwards. A permutation
* is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words.
* EXAMPLE
* Input: Tact Coa
* Output: True (permutations: "taco cat", "atco eta", etc.)
*/
#include<bits/stdc++.h>
using namespace std;
bool isPalindromePermutaion(string s){
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
bool isPalindromePermutaion(string s){
    //Time complexity: O(n) , space complexity: O(n)
    map<char, int> m;
    map<char, int>:: iterator it;
    int c = 0, c1 = 0, c2 = 0;
    for(int i = 0; i < s.size(); i++){
       if(s[i] != ' '){
            m[tolower(s[i])]++;
            c++;
       }
    }
    for(it = m.begin(); it != m.end(); it++){
        if(it->second % 2 == 0){
            c1++;
        }else{
            c2++;
        }
    }
    if(c % 2 == 0 && c2 == 0)
      return true;
     if(c % 2 == 1 && c2 == 1){
        return true;
    }
    return false;
}
int main()
{
    string s;
    if(isPalindromePermutaion("Tact Coa")){
         cout<<"Yes\n"<<endl;
    }else{
         cout<<"No\n"<<endl;
    }

    return 0;
}
