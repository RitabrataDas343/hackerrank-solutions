sp = str(raw_input())
mylist = sp.split()
n = int(mylist[0])
m = int(mylist[1])
string = ".|."
for i in range(0, n-1, 2):
    print((string*(i+1)).center(m,'-'))
print("WELCOME".center(m,'-'))
for i in range(n-1, 0, -2):
    print((string*(i-1)).center(m,'-'))