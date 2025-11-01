str = input()
ans = ""
for char in str:
    if char.isupper():
        ans += char.lower()
    else:
        ans += char.upper()
print(ans)