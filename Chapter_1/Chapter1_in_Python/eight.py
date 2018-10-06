"""
1.8
*    Assume you have a method isSubstring which
*   checks if one word is a substring of another.
*   Given two strings, s1 and s2, write code to check
*   if s2 is a rotation of s1 using only one call
*   to isSubstring (i.e., “waterbottle” is a rotation of “erbottlewat”).
"""
def solve(a,b):
    l = len(a)
    if l == len(b) or l > 0:
        s = a + a
        return b in s
    return False

if __name__ == "__main__":
    print(solve("ppale","apple"))
