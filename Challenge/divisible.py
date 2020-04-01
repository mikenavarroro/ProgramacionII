a, b, c = input().split()
a, b, c = int(a), int(b), int(c)
divisible = 0

for i in range(a, b+1):
    if i % c == 0:
        divisible += 1
print(divisible)
