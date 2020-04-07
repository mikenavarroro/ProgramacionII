cadena = input()

for i in range(1, len(cadena)+1):
    for j in range(i):
        print(cadena[j], end = '')
    print()
