def ncr(n,r):
    if r<0 or n<r:
        return 0
    else:
        return fact[n]*inv[r]*inv[n-r]%mod

R,C = map(int,input().split())
X,Y = map(int,input().split())
D,L = map(int,input().split())
mod = 10**9+7
fact = [1]
ans = 0

for n in range(R*C):
    fact+=[(n+1)*fact[n]%mod]

inv = [pow(fact[n],mod-2,mod) for n in range(R*C+1)]

for i in range(3):
    for j in range(3):
        if X<=i and Y<=j:
            continue
        else:
            s = ncr((X-i)*(Y-j),D)*ncr((X-i)*(Y-j)-D,L)
            v = (i%2+1)*(j%2+1)
            ans+=(-1)**(i+j)*v*s

ans*=(R-X+1)*(C-Y+1)
print(ans%mod)