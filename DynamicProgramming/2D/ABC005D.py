from numpy import *
N = int(input())
D = array([list(map(int,input().split())) for n in range(N)],int32)
Q = int(input())
P = [int(input()) for q in range(Q)]
Dcum = zeros((N+1,N+1),int32)
Dcum[1:,1:] = cumsum(D,axis=0).cumsum(axis=1)
ans = zeros(N*N+10,int32)

for a in range(1,N+1):
    for b in range(1,N+1):
        x = Dcum[a:,b:]+Dcum[:-a,:-b]-Dcum[a:,:-b]-Dcum[:-a,b:]
        ans[a*b] = max(ans[a*b],x.max())

ans = maximum.accumulate(ans)

for p in P:
    print(ans[p])