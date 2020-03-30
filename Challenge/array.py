array = []
arr1 = []
arr2 = []
negativos = []
sum1 = 0
sum2 = 0
pos = 0

n = int(input()) + 1

for i in range(n):
    array.append(int(input()))

for i in array:
    if i < 0:
        negativos.append(i)

arr1.append(array[0])


        
if sum(arr1) == sum(arr2):
    if len(arr1) > len(arr2):
        print(arr1)
    elif len(arr2) > len(arr1):
        print(arr2)
    else:
        print(arr1, arr2)