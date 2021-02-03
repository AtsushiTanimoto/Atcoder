N = int(input())
dp = 1000001*[0]
dp[1] = 0
dp[2] = 0
dp[3] = 1

for n in range(4,N+1):
    dp[n] = (dp[n-3]+dp[n-2]+dp[n-1])%10007

print(dp[N])