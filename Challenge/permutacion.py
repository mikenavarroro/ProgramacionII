n, r = input().split()
n, r = int(n), int(r)

def factorial(num):
    if num <= 1:
        return 1
    else:
        return num * factorial(num-1)

P = lambda n,r: factorial(n)//(factorial(n-r))

print(P(n, r))
