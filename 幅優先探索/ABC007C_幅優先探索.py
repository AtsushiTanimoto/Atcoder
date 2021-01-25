from collections import *
H,W = map(int,input().split())
SX,SY = map(int,input().split())
GX,GY = map(int,input().split())
S = list(list(input()) for h in range(H))
D = [[1,0],[-1,0],[0,1],[0,-1]]
Q = deque([[SX-1,SY-1]])
S[SX-1][SY-1] = 0

while Q:
    x,y = Q.popleft()
    for dx,dy in D:
        if S[x+dx][y+dy]==".":
            S[x+dx][y+dy] = S[x][y]+1
            Q.append([x+dx,y+dy])

print(S[GX-1][GY-1])