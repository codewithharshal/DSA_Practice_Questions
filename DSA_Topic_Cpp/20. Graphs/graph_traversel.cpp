#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;

vector<list<int>> graph;
int v;

void add_edge(int src, int dest, vector<list<int>> &graph, bool bi_dir = true)
{
    graph[src].push_back(dest);
    if (bi_dir)
    {
        graph[dest].push_back(src);
    }
}

// TODO: DSF, BFS, path find any, shortest

int main()
{
    cin >> v;
    graph.resize(v, list<int>());

    int e;
    cin >> e;

    while (e--)
    {
        int s, d;
        cin >> s >> d;
        add_edge(s, d, graph);
    }

    return 0;
}