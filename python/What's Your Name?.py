def print_full_name(first, last):
    print("Hello " + first + " " + last + "! You just delved into python.")

if __name__ == '__main__':
    first_name = raw_input()
    last_name = raw_input()
    print_full_name(first_name, last_name)