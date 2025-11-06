def solution(arr):
    answer = []
    
    for num in arr:
        tmp = [num] * num
        answer.extend(tmp)
    return answer