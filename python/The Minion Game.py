def minion_game(string):
    stuart, kevin = 0, 0
    for i in range(0, len(string)): 
        if(string[i] == 'A' or string[i] == 'E' or string[i] == 'O' or string[i] == 'I' or string[i] == 'U'):
            kevin += len(string) - i
        else:
            stuart += len(string) - i
            
    if(stuart > kevin):
        print("Stuart " + str(stuart))
    elif(kevin > stuart):
        print("Kevin " + str(kevin))
    else:
        print("Draw")
        

if __name__ == '__main__':
    s = input()
    minion_game(s)