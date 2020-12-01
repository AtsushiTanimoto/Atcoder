from numpy import *
N,Q = map(int,input().split())
imos = (N+1)*[0]

for q in range(Q):
    l,r = map(int,input().split())
    imos[l-1]+=1
    imos[r]-=1

ans = cumsum(imos)
print(*ans[:-1]%2,sep="")