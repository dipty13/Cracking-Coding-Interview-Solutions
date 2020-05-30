/*  1.3  URLify
*  Write a method to replace all spaces in a string with '%20'. You may assume that the string
*  has sufficient space at the end to hold the additional characters, and that you are given the "true"
*  length of the string. (Note: If implementing in Java, please use a character array so that you can
* perform this operation in place.)
* EXAMPLE
* Input: "Mr John Smith ", 13
* Output: "Mr%20John%20Smith"
*/
#include<bits/stdc++.h>
using namespace std;
void replaceSpaces(char *s, int len){
    //Time complexity: O(n) , space complexity: O(1)
   int numOfSpaces = 0;
   for(int i = 0; i < len; i++){
        if(s[i] == ' '){
            numOfSpaces++;
        }
   }
   int extendedLength = len + numOfSpaces * 2;
   cout << extendedLength << endl;
   for(int i = len - 1; i >= 0; i--){
     if(s[i] == ' '){
        s[extendedLength - 1] = '0';
        s[extendedLength - 2] = '2';
        s[extendedLength - 3] = '%';
        extendedLength -= 3;
     }else{
          s[extendedLength - 1] = s[i];
          extendedLength--;
     }
   }
}
int main()
{
    char s[]  = "Mr John Smith    ";
    replaceSpaces(s, 13);
    cout<<s <<endl;
    return 0;
}
