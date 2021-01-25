N = int(input())
S = "123456"

for n in range(N%30):
    S = S[:n%5]+S[1+n%5]+S[n%5]+S[2+n%5:]

print(S)