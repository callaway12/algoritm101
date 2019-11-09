def bsearch(target, a):
    start = 0
    end = len(a)

    while start < end:
        mid = (start + end) // 2
        if a[mid] < target:
            start = mid + 1
        elif a[mid] > target:
            end = mid
        elif mid > 0 and a[mid-1] == target:
            end = mid
        else:
            return mid

    return -1


def solution(k, room_number):
    room_list = [0] * (k + 1)
    assigned_result = []
    for n in room_number:
        if room_list[n] == 0:
            room_list[n] = 1
            assigned_result.append(n)
        else:
            tmp_arr = room_list[n+1:k+1]
            x = bsearch(0, tmp_arr)
            idx = n + x + 1
            assigned_result.append(idx)
            room_list[idx] = 1

    return assigned_result
