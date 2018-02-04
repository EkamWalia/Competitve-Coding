from collections import defaultdict
class Graph:

    def __init__(self , n , e) :
        self.n = n #Vertices
        self.e = e #Edges
        self.graph = defaultdict(list)
        self.level = [-1] * n

    def add_edge(self , u , v):
        self.graph[u].append(v)
        self.graph[v].append(u)

    def print_graph(self):
        print(list(self.graph))

    def bfs(self , s):
        queue = []
        vis = [0] * n
        queue.append(s)
        vis[s] = 1
        self.level[s] = 0
        print("Starting bfs")
        while len(queue) != 0:
            p = queue.pop(0)
            print(p)
            for i in self.graph[p]:
                if vis[i] == 0:
                    vis[i] = 1
                    queue.append(i)
                    self.level[i] = self.level[p] + 1

if __name__ == "__main__" :
    print("Enter n,e")
    n,e = [int(i) for i in input().split()]
    g = Graph(n,e)

    while e:
        print("Enter u,v")
        u,v = [int(i) for i in input().split()]
        g.add_edge(u,v)
        e -=1

    s = int(input())
    g.bfs(s)
    print("BFS Complete")
