def merge_the_tools(string, k):
    mylist = list()
    n = len(string)
    for i in range(k, n+1, k):
        mylist.append(string[i-k:i])
    for i in mylist:
        g = set(i)
        q = ''.join(g)
        print(q)
        
if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)