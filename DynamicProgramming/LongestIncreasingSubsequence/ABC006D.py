from bisect import *
N = int(input())
C = [int(input()) for n in range(N)]
LIS = [C[0]]

for n in range(N):
    if LIS[-1]<C[n]:
        LIS+=[C[n]]
    else:
        LIS[bisect_left(LIS,C[n])] = C[n]

print(N-len(LIS))