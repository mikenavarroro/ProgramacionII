n = int(input())
year = []

for i in range(n):
    year.append(int(input()))

for i in range(n):
    if year[i] % 4 == 0:
        if year[i] % 100 == 0:
            if year[i] % 400 == 0:
                print('Yes')
            else:
                print('No')
        else:
            print('Yes')
    else:
        print('No')