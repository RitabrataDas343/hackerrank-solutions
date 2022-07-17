n = int(input())
mylist = list()
for i in range(0,n):
    k = str(raw_input())
    mylist.append(k)
g = set(mylist)
print(len(g))