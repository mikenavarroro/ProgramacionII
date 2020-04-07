num, div = input().split()
num, div = int(num), int(div)

for i in range(div+1, 1, -1):
    if num % i == 0 and div % i == 0:
        num //= i
        div //= i

print(num, div)
