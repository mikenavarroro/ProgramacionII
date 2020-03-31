cadena = input()
abecedario = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 
            'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
            't', 'u', 'v', 'w', 'x', 'y', 'z', ' ']

j = 0
for i in abecedario:
    if i in cadena.lower():
        j = 0
    else:
        j =1
        break
if j == 0:
    print("YES")
else:
    print("NO")
