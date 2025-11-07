def solution(my_strings, parts):
    answer = ""
    for i, part in enumerate(parts):
        s, e = part[0], part[1]
        answer += my_strings[i][s:e+1]
    return answer