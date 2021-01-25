N = int(input())
T = sorted([list(map(int,input().split("-"))) for n in range(N)])
ans = []

for S,E in T:
    S = 5*(S//5)
    if S%100==60:
        S+=40
    E = 5*((E+4)//5)
    if E%100==60:
        E+=40
    if ans and S<=ans[-1][1]:
        ans[-1][1] = max(ans[-1][1],E)
    else:
        ans += [[S,E]]

for S,E in ans:
    S = str(S)
    S = S.zfill(4)
    E = str(E)
    E = E.zfill(4)
    print(S+"-"+E)