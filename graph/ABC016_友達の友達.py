from networkx import *
N,M = map(int,input().split())
G = Graph()
G.add_nodes_from(range(1,N+1))
G.add_edges_from([list(map(int,input().split())) for m in range(M)])
F = floyd_warshall(G)

for D in F.values():
    print(list(D.values()).count(2))