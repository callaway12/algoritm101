def quick_sort(arr):
    if len(arr) > 1:
        left = []
        right = []
        real = []
        pivot = arr[len(arr) - 1]
        for i in range(len(arr) - 1):
            if arr[i] < pivot:
                left.append(arr[i])
            elif arr[i] > pivot:
                right.append(arr[i])
            else:
                real.append(arr[i])
        real.append(pivot)
        return quick_sort(left) + real + quick_sort(right)
    else:
        return arr


in_arr = [26, 5, 37, 1, 61, 11, 59, 15, 48, 19]

print(quick_sort(in_arr))