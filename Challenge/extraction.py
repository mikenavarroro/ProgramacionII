n = int(input())

cadena = input()
numeros = []

for i in cadena:
    if i.isnumeric():
        numeros.append(i)

for i in numeros:
    print(i, end = ' ')