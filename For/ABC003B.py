S = input()
T = input()
a = "You can win"

for s,t in zip(S,T):
    if (s==t) or (s=="@" and t in "atcoder") or (t=="@" and s in "atcoder"):
        pass
    else:
        a = "You will lose"

print(a)