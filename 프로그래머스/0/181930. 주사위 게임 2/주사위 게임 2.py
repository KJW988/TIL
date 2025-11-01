from collections import Counter

def solution(a, b, c):
    cnt = list(Counter([a, b, c]))
    if len(cnt) == 1:
        return (a+b+c) * (a**2 + b**2 + c**2) * (a**3 + b**3 + c**3)
    elif len(cnt) == 2:
        return (a+b+c) * (a**2 + b**2 + c**2)
    else:
        return a+b+c
 