if __name__ == '__main__':
    l = list()
    n = int(raw_input())
    integer_list = map(int, raw_input().split())
    for i in integer_list:
        l.append(i)
    t = tuple(l)
    print(hash(t))