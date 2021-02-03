S = input()
T = input()
ans = "You can win"

for s,t in zip(S,T):
    if (s==t) or (s=="@" and t in "atcoder") or (t=="@" and s in "atcoder"):
        pass
    else:
        ans = "You will lose"

print(ans)