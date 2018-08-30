/*  1.1
*   Implement an algorithm to determine if a string
*   has all unique characters. What if you can not use additional data structures?
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag = 1;
    string input;
    bool m[1005];
    cin>>input;
    for(int i=0;i<input.size();i++)
    {
        if(m[input[i]])
        {
            flag = 0;
            break;
        }
        m[input[i]] = true;
    }
    if(flag){
         cout<<"Yes\n"<<endl;
    }else{
         cout<<"No\n"<<endl;
    }

    return 0;
}
