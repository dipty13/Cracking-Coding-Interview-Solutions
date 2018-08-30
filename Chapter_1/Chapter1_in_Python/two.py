"""
1.2
 Write code to reverse a C-Style String.
 (C-String means that “abcd” is represented as five characters, including the null character.)
"""
def reverse_string(s):
    if not s:
        return s;
    i = 0
    j = len(s) - 1;
    strg = list(s)
    while i < j:
        tmp = strg[i]
        strg[i] = strg[j]
        strg[j] =  tmp
        i += 1
        j -= 1
    s = ""
    for i in range(len(strg)):
        s += strg[i]
    return s

if __name__ == "__main__":
    print(reverse_string(""))
