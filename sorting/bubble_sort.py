array = [1, 5, 8, 2, 3]

for y in range(0, len(array)-1):
    for x in range(0, len(array)-1):
        if array[x] > array[x+1]:
            array[x], array[x+1] = array[x+1], array[x]

print(array)
