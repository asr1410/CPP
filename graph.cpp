#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int Var;
    list<int> *adj;

public:
    Graph(int Var);
    void addEdge(int v, int w);
    void BFS(int Node);
};
Graph::Graph(int Var)
{
    this->Var = Var;
    adj = new list<int>[Var];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::BFS(int Node)
{
    int arr[Var] = {};
    queue<int> que;
    arr[Node] = 1;
    que.push(Node);
    while (!que.empty())
    {
        Node = que.front();
        cout << Node << " ";
        que.pop();
        for (auto i = adj[Node].begin(); i != adj[Node].end(); i++)
        {
            if (!arr[*i])
            {
                arr[*i] = 1;
                que.push(*i);
            }
        }
    }
}
int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(2);
    return 0;
}