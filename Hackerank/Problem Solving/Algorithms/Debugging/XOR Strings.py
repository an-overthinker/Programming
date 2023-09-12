def strings_xor(s, t):
    res = ""
    for i in range(len(s)):
        if s[i] == t[i]:                #modification-1
            res="".join([res,'0'])      #modification-2
        else:
            res="".join([res,'1'])      #modification-3

    return res

s = input()
t = input()
print(strings_xor(s, t))