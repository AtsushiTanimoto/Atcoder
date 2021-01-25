N = int(input())
A = list(map(int,input().split()))
dp = N*[0]
dp[0] = 0
dp[1] = abs(A[1]-A[0])

for n in range(2,N):
    dp[n] = min(dp[n-2]+abs(A[n-2]-A[n]),dp[n-1]+abs(A[n-1]-A[n]))

print(dp[-1])