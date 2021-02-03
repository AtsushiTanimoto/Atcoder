N,M = map(int,input().split())

if 2*N<=M<=3*N:
    print(3*N-M,M-2*N,0)
elif 3*N<=M<=4*N:
    print(0,4*N-M,M-3*N)
else:
    print(-1,-1,-1)