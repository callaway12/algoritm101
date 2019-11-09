from itertools import permutations


def solution(user_id, banned_id):
    dup_list = []
    available_lst = list(permutations(user_id, len(banned_id)))

    # 순열 검사
    for perm in available_lst:
        possible = True
        # 순열 내 요소 b와 비교
        for idx, bid in enumerate(banned_id):
            if len(perm[idx]) != len(bid):
                possible = False
                break
            for i in range(len(bid)):
                if perm[idx][i] != bid[i] and bid[i] != "*":
                    possible = False
                    break
        if possible:
            dup_list.append(sorted(perm))

    remove_dup = list(set(map(tuple, dup_list)))
    return len(remove_dup)
