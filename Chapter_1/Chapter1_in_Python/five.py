"""
   1.5
   Write a method to replace all spaces in a string with ‘%20’.
"""
def solve(a):
    s = ""
    for i in range(len(a)):
        if a[i] == ' ':
            s += "%20"
        else:
            s += a[i]
    return s

if __name__ == "__main__":
    print(solve("ppale apple"))
