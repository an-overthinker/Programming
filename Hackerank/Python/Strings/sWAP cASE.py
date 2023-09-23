def swap_case(s):
    l=[]
    for letter in s:
        if letter.isupper():
            mod_letter = letter.lower()
            l.append(mod_letter)
        elif letter.islower():
            mod_letter = letter.upper()
            l.append(mod_letter)
        else:
            l.append(letter)
            
    s_final = ''.join(l)
    return s_final

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)