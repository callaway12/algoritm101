def merge_sort(arr):
    if len(arr) < 2:
        return arr

    mid = len(arr) // 2
    low_arr = merge_sort(arr[:mid])
    high_arr = merge_sort(arr[mid:])

    real = []
    l = h = 0
    while l < len(low_arr) and h < len(high_arr):
        if low_arr[l] < high_arr[h]:
            real.append(low_arr[l])
            l += 1
        else:
            real.append(high_arr[h])
            h += 1
        real += low_arr[l:]
        real += high_arr[h:]
        return real
    

in_arr = [100, 23, 31, 123, 435, 642, 1]


print(str(merge_sort(in_arr)))
