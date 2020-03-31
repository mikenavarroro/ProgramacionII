cadena = input()

abecedario = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 
            'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
            't', 'u', 'v', 'w', 'x', 'y', 'z']

for i in cadena:
    if i in abecedario:    
        if i == 'z':
            print('a', end = '')
        else:
            letra = abecedario.index(i)
            print(abecedario[letra+1], end = '')
    else:
        if i == 'Z':
            print('A', end = '')
        else:
            letra = abecedario.index(i.lower())
            print(abecedario[letra+1].upper(), end = '')
