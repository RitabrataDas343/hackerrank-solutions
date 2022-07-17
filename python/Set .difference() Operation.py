n = int(input())
englist = [int(i) for i in input().split()]
m = int(input())
frelist = [int(i) for i in input().split()]
print(len(set(englist).difference(set(frelist))))

# print(len(set(englist) - set(frelist)))