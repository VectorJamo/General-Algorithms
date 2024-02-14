import random

def quick_sort(array):
    lesser = []
    greater = []
    same = []

    if len(array) < 2:
        return array

    pivot = random.randint(0, len(array) - 1)
    for element in array:
        if element < array[pivot]:
            lesser.append(element)
        elif element > array[pivot]:
            greater.append(element)
        else:
            same.append(element)
    
    return quick_sort(lesser) + same + quick_sort(greater)

my_array = [17, 5, 12, 8, 19, 2, 10, 15, 4, 20, 7, 13, 1, 14, 11, 6, 3, 16, 9, 18]
print(quick_sort(my_array))
