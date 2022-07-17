def reverse(s):
  str = ""
  for i in s:
    str = i + str
  return str

def print_rangoli(size):
    size = n
    width = 4*n - 3
    string = " abcdefghijklmnopqrstuvwxyz"
    mylist = list(string)
    s = mylist[n]
    x = 1
    for i in range(1, n+1):
        print(s.center(width,'-'))
        if(i != n):
            s1 = s[:x]
            x += 2
            s = s1 + "-" + mylist[n-i] + "-" + reverse(s1)
    a = 2 * n - 4 
    b = 2 * n
    for i in range(1, n):
        s = s[:a] + s[b:]
        print(s.center(width,'-'))
        a = a - 2
        b = b - 2

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)