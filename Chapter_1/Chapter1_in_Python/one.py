"""
1.1
 Implement an algorithm to determine if a string
 has all unique characters. What if you can not use additional data structures?
"""
def isUnqueChar(s):
    char_set = []
    for i in range(len(s)):
        if s[i] in char_set:
            return False
        char_set.append(s[i])
    return True

if __name__ == "__main__":
    print(isUnqueChar("aba"))
