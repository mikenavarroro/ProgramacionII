num, div = input().split()
num, div = int(num), int(div)
MCD = 1

def noEsPrimo(a):
    for i in range(a):
        if i != 0:    
            if a % i == 0 and i != 1:
                return True
            else:
                return False


while noEsPrimo(num) and noEsPrimo(div):
    mcmn = []
    for i in range(1, num):
        if num % i == 0:
            mcmn.append(i)

    for i in range(1, div):
        if div % i == 0 and i in mcmn:
            MCD = i
        
    num //= MCD
    div //= MCD
    del(mcmn)

print(num, div)