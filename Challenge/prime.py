#a, b = input().split()
#a, b = int(a), int(b)
a = int(input())

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, n+1):
        divisores = []
        if n % i == 0:
            divisores.append(i)
    if len(divisores) > 1:
        return False
    else:
        return True
    del(divisores)

print(is_prime(a))
