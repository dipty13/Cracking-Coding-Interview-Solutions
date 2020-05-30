/*  1.1
*   Implement an algorithm to determine if a string
*   has all unique characters. What if you can not use additional data structures?
*/
#include<bits/stdc++.h>
using namespace std;
bool isUnique2(string input){
    //checking unique string using bit vector
    //Time complexity: O(n) , space complexity: O(1)
    int checker = 0;
    for(int i=0;i<input.size();i++)
    {
        int value = input[i] -'a';
        /*if value is 4 then 1 << 4 is 00001000, checker(00000000 & 00001000)-> 00000000
        * if we get any character repeated then with and operation we will get a value
        * greater then 0
        */
        if((checker & (1 << value)) > 0)
        {
            return false;
        }
        // checker will be (00000000 or 00001000) -> 00001000
        checker |= (1 << value);
    }
    return true;
}
bool isUnique(string input){
    //Time complexity: O(n) , space complexity: O(n)
   vector<bool> m(128, false);
    for(int i=0;i<input.size();i++)
    {
        if(m[input[i]])
        {
            return false;
        }
        m[input[i]] = true;
    }
    return true;
}
int main()
{
    string input;
    cin>>input;
    if(isUnique2(input)){
         cout<<"Yes\n"<<endl;
    }else{
         cout<<"No\n"<<endl;
    }

    return 0;
}
