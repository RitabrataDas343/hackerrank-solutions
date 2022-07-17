# Text format:
# print ("HackerRank".ljust(width,'-'))
# print ("HackerRank".rjust(width,'-'))
# print ("HackerRank".center(width,'-'))

n = int(input())
width = 2*n-1
for i in range (0, width, 2):
    print (("H"*(i+1)).center(width,' '))
padding = (n-1)/2
row_size = (n+1)/2
for i in range (0,n+1):
    print(" "*int(padding) + ("H"*n) + (" "*(n*3)) + ("H"*n))
for i in range (0,row_size):
    print(" "*int(padding) + ("H"*n*5))
for i in range (0,n+1):
    print(" "*int(padding) + ("H"*n) + (" "*(n*3)) + ("H"*n))
padding = 4*n
for i in range (width, 0, -2):
    print (" "*int(padding)+("H"*(i)).center(width,' '))