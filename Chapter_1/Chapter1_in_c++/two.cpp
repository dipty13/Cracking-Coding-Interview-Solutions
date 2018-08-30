/*  1.2
*   Write code to reverse a C-Style String.
*   (C-String means that “abcd” is represented as five characters, including the null character.)
*/
#include<bits/stdc++.h>
using namespace std;
string reverseString(string str)
{
   if(str.length() == 0)
   {
       return str;
   }
   int i = 0;
   int j = str.length() - 1;
   while(i < j)
   {
       char tmp = str[i];
       str[i] = str[j];
       str[j] = tmp;
       i++;
       j--;
   }
   return str;

}
int main()
{
    string input;
    cin>>input;
    cout<<reverseString(input)<<endl;
    return 0;
}
