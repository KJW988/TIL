def solution(num_list):
    mul = 1
    for n in num_list:
        mul *= n
    return 1 if mul < (sum(num_list))**2 else 0