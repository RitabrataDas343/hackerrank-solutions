def average(array):
    h = set(array)
    n = sum(h)
    m = len(h)
    return n/m

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)