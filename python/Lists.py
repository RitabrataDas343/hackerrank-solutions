if __name__ == '__main__':
    N = int(raw_input())
    mylist = list()
    for i in range(0, N):
        S = str(raw_input())
        t = len(S)
        if S[0:6] == "insert":
            substr = S[7:t]
            A = int(substr.rsplit(' ', 1)[0])
            B = int(substr.rsplit(' ', 1)[1])
            mylist.insert(A,B)
        elif S == "print": 
            print(mylist)
        elif S[0:6] == "remove":
            substr = S[7:t]
            K = int(substr)
            mylist.remove(K)
        elif S[0:6] == "append":
            substr = S[7:t]
            G = int(substr) 
            mylist.append(G)
        elif S == "sort":
            mylist.sort()
        elif S == "pop":
            l = len(mylist)
            mylist.pop(l-1)
        elif S == "reverse":
            mylist.reverse()