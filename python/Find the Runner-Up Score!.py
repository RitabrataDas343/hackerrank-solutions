if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    sem = len(arr)
    maximum, sec = 0, 0
    if arr[0] > arr[1]:
        maximum = arr[0]
        sec = arr[1]
    else:
        maximum = arr[1]
        sec = arr[0]
    for i in range(2, sem):
        if arr[i] > maximum:
            sec = maximum
            maximum = arr[i]
        elif arr[i] < maximum and arr[i] > sec:
            sec = arr[i] 
        elif sec == maximum and arr[i] < sec:
            sec = arr[i]
    print (sec)