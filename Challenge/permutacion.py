n, r = input().split()
n, r = int(n), int(r)
resultado = 0

def factorial(num):
    if num <= 1:
        return 1
    else:
        return num * factorial(num-1)

P = lambda n,r: factorial(n)//(factorial(n-r))

sgn = 1
for _ in range(r, 0, -1):
    resultado += sgn * P(n, r)
    sgn *= -1

print(resultado)
