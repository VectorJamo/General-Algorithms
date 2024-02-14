def merge(left, right):
    i = 0
    j = 0
    merged = []
    while (i < len(left) and j < len(right)):
        if (left[i] < right[j]):
            merged.append(left[i])
            i += 1
        elif (right[j] < left[i]):
            merged.append(right[j])
            j += 1

    while (i < len(left)):
        merged.append(left[i])
        i += 1
    while (j < len(right)):
        merged.append(right[j])
        j += 1
    
    return merged

def merge_sort(array):
    if len(array) == 1:
        return array
    
    mid_point = len(array)//2

    left = array[: mid_point]
    right = array[mid_point :]

    return merge(merge_sort(left), merge_sort(right))

my_array = [17, 5, 12, 8, 19, 2, 10, 15, 4, 20, 7, 13, 1, 14, 11, 6, 3, 16, 9, 18]
print(merge_sort(my_array))

