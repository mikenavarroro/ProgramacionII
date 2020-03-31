n = int(input())

if n >= 1 and n <= 9:
    for i in range(n):
        for j in range(i+1):
            if i == j:
                print(j+1, end = '')
            else:
                print(j+1, end = ' ')
        print()