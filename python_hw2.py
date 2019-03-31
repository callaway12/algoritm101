def quick_sort(arr):
    if len(arr) > 1:
        pivot = arr[len(arr) - 1]
        left, mid, right = [], [], []
        for i in range(len(arr) - 1):
            if arr[i] < pivot:
                left.append(arr[i])
            elif arr[i] > pivot:
                right.append(arr[i])
            else:
                mid.append(arr[i])
        mid.append(pivot)
        print(str(mid)+str(left)+str(right))
        return quick_sort(left) + mid + quick_sort(right)
    else:
        return arr


arr = [26, 5, 37, 1, 61, 11, 59, 15, 48, 19]

print(quick_sort(arr))