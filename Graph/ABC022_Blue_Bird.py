from numpy import *
from scipy.sparse.csgraph import *
inf = 1e+9
N,M = map(int,input().split())
G1 = array([[inf]*N]*N)

for m in range(M):
    u,v,l = map(int,input().split())
    G1[u-1,v-1] = l
    G1[v-1,u-1] = l

G2 = array(G1)
G2[:][0] = N*[inf]
G2[0][:] = N*[inf]
F = floyd_warshall(G2)
res = min(min(G1[0,i]+G1[0,j]+F[i,j] for j in range(i+1,N)) for i in range(1,N-1))

if res<inf:
    print(int(res))
else:
    print(-1)