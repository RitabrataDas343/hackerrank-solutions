import os

def solve(s):
    mylist = list(s)
    n = len(mylist)
    mylist[0] = mylist[0].upper()
    for i in range(0, n):
        if mylist[i] == ' ':
            mylist[i+1] = mylist[i+1].upper()
    string = ''.join(mylist)
    return string

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    s = input()
    result = solve(s)
    fptr.write(result + '\n')
    fptr.close()