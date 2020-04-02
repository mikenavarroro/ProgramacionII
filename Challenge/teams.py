n = int(input())
N, M = [], []

for i in range(n):
    N.append('0')
    M.append('0')

for i in range(n):
    N[i], M[i] = input().split()
    N[i], M[i] = int(N[i]), int(M[i])

for i in range(n):
    print((sum(x for x in range(1, N[i])))*M[i])
