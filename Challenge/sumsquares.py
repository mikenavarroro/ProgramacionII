inicio, final = input().split()
inicio, final = int(inicio), int(final)

print(sum(x**2 for x in range(inicio, final+1)))
