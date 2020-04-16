n = int(input())
lista = list(input().split())
for i in range(len(lista)):
    lista[i] = int(lista[i])

mayor = lista[1]-lista[0]
for i in range(1, n):
    if i < n-1:
        if (lista[i+1]-lista[i]) > mayor:
            mayor = lista[i+1]-lista[i]

print(mayor)
