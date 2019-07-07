#include<bits/stdc++.h>
using namespace std;

class Graph
{
public:
    map<char,vector<char> > adjList;
    void addEdge(char node1, char node2, bool isBidirectional);
    bool bfs(char src, char dest);
};

void Graph::addEdge(char node1, char node2, bool isBidirectional = false)
{
    adjList[node1].push_back(node2);
    if(isBidirectional)
        adjList[node2].push_back(node1);

}
bool Graph::bfs(char src, char dest)
{
    queue<char> q;
    map<char, bool> visited;
    q.push(src);
    visited[src] = true;

    while(!q.empty())
    {
        char node = q.front();
        if(node == dest)
            return true;
        q.pop();
        for(char neighbor: adjList[node])
        {
            if(!visited[neighbor])
            {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
    return false;

}
int main()
{
    Graph g;
    g.addEdge('A', 'B');
    g.addEdge('B', 'C');
    g.addEdge('B', 'D');
    g.addEdge('B', 'E');
    cout << ((g.bfs('A', 'C') == true)? "yes\n" : "no\n" );

    return 0;
}
