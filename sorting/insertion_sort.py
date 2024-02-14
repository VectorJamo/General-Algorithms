array = [17, 5, 12, 8, 19, 2, 10, 15, 4, 20, 7, 13, 1, 14, 11, 6, 3, 16, 9, 18]

for x in range(1, len(array)):
    current_index = x
    while array[current_index] < array [current_index-1]:
        array[current_index], array[current_index-1] = array[current_index-1], array[current_index]
        current_index -= 1

        if current_index == 0:
            break
print(array)