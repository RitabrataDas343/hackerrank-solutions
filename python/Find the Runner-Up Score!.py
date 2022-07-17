if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    s = set(arr)
    m = list(s)
    m.sort()
    m.reverse()
    print(m[1])