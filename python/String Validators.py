if __name__ == '__main__':
    s = raw_input()
    mylist = list(s)
    n = len(mylist)
    a, b, c, d, e, = False, False, False, False, False
    for i in range(0, n):
        if mylist[i].isalnum():
            a = True
        if mylist[i].isalpha():
            b = True
        if mylist[i].isdigit():
            c = True
        if mylist[i].islower():
            d = True
        if mylist[i].isupper():
            e = True
    print(a)
    print(b)
    print(c)
    print(d)
    print(e)
        
         
