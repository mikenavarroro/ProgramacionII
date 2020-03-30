n = int(input())
cad = []
cadf = []

for i in range(n):
    cad.append('0')
    cadf.append('0')

for i in range(n):
    cad[i], cadf[i] = input().split(' ')

for i in range(n):
    if cadf[i] in cad[i]:
        print("Yes")
    else:
        print("No")