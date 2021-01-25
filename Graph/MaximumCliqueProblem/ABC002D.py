from networkx import *
from networkx.algorithms.approximation.clique import *
N,M = map(int,input().split())
G = Graph()
G.add_nodes_from(range(1,N+1))
G.add_edges_from([list(map(int,input().strip().split())) for m in range(M)])
print(large_clique_size(G))