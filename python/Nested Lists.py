if __name__ == '__main__':
    mylist= list()
    namelist = list()
    for _ in range(int(raw_input())):
        name = raw_input()
        score = float(raw_input())
        mylist.append([name,score])
    n = len(mylist)
    minimum, sec = 0, 0
    if mylist[0][1] > mylist[1][1]:
        minimum = mylist[1][1]
        sec = mylist[0][1]
    else:
        minimum = mylist[0][1]
        sec = mylist[1][1]
    for i in range(2, n):
        if mylist[i][1] < minimum:
            sec = minimum
            minimum = mylist[i][1]
        elif mylist[i][1] > minimum and mylist[i][1] < sec:
            sec = mylist[i][1] 
        elif sec == minimum and mylist[i][1] > sec:
            sec = mylist[i][1]           
    for j in range(0, n):
        if mylist[j][1] == sec:
            namelist.append(mylist[j][0])
    namelist.sort()
    for i in range(0, len(namelist)):
        print(namelist[i])
