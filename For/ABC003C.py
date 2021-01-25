N,K = map(int,input().split())
R = sorted(map(int,input().split()))
ans = 0

for n in range(N-K,N):
    ans = (ans+R[n])/2

print(ans)