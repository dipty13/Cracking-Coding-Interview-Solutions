"""
1.4
 Write a method to decide if two strings are anagrams or not.
"""
def is_anagram(a,b):
    a =list(a)
    b = list(b)
    a.sort()
    b.sort()
    return a == b

if __name__ == "__main__":
    print(is_anagram("listen","silent"))
