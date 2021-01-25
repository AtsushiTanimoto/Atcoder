from networkx import *
G = DiGraph()
C = list(map(int,input().split()))
frm = [-100,0,100]
mx = 1000
source = mx
boxes = [mx+1,mx+2,mx+3]
target = mx+4
G.add_node(source,demand=-sum(C))
G.add_node(target,demand=sum(C))

for i in range(3):
    G.add_edge(source,boxes[i],weight=0,capacity=C[i])

for i in range(mx):
    for j in range(3):
        G.add_edge(boxes[j],i,weight=abs(i-frm[j]-500),capacity=1)
    G.add_edge(i,target,weight=0,capacity=1)

print(min_cost_flow_cost(G))