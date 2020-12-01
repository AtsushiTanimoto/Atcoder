from numpy import *
N,M = map(int,input().split())
imos = (M+1)*[0]
score = 0

for n in range(N):
    l,r,s = map(int,input().split())
    imos[l-1]+=s
    imos[r]-=s
    score+=s

print(score-min(cumsum(imos[:-1])))