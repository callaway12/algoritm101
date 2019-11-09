import ast


def solution(s):
    result = []
    s = s.replace("{", "[").replace("}", "]")
    lst_s = ast.literal_eval(s)

    sorted_lst = sorted(lst_s, key=len)

    for elem in sorted_lst:
        if len(elem) == 1:
            result.append(elem[0])
        else:
            for e in elem:
                if e in result:
                    continue
                else:
                    result.append(e)
    return result
