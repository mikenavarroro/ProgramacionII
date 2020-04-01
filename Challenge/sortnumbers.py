a, b, c = input().split()
a, b, c = int(a), int(b), int(c)

serie = [a, b, c]
serie.sort()
for i in serie:
    print(i, end = ' ')
