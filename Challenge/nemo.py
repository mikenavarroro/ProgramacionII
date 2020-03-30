n = int(input())
cadena = input()
position = 1

for i in range(len(cadena)):
    if cadena[i] == ' ':
        position += 1
    if cadena[i] == 'N' and cadena[i+1] == 'e' and cadena[i+2] == 'm' and cadena[i+3] == 'o':
        print(position)
        