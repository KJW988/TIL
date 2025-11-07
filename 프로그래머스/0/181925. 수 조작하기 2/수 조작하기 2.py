def solution(numLog):
    answer = ''
    for i in range(len(numLog) - 1):
        ctrl = numLog[i+1] - numLog[i]
        if ctrl == 1:
            answer += "w"
        elif ctrl == -1:
            answer += "s"
        elif ctrl == 10:
            answer += "d"
        else:
            answer += "a"
            
    return answer