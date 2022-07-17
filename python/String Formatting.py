def print_formatted(number):
    tring = str(bin(number))
    max_binary = string[2:]
    width = len(max_binary)
    for i in range(1, number+1):
        n = str(oct(i))
        m = str(hex(i))
        g = str(bin(i))
        octal = n[1:]
        hexadecimal = m[2:]
        binary = g[2:]
        print(str(i).rjust(width,' ') + (octal.rjust(width+1,' ')) + ((hexadecimal.upper()).rjust(width+1,' ')) + (binary.rjust(width+1,' ')))

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)