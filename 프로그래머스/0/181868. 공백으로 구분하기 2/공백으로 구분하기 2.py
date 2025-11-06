def solution(my_string):
    answer = []
    for str in my_string.strip().split(" "):
        if str != "":
            answer.append(str)
    return answer