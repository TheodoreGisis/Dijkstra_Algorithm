#include <iostream>
#include <vector>
#include <vector>

using namespace std;

#define INF 1000

// This class help us to make our pairs of source - edges - distance.
class Pair
{
public:
    int edge;
    int source;
    int distance;
    Pair() : edge{0}, source{0}, distance{0} {}
    Pair(int edge, int source, int distance) : edge{edge}, source{source}, distance{distance} {}
};

// Class that we implement the graph
class Graph
{
private:
    int V;
    vector<Pair> adj;

public:
    Graph(int V);
    void add_edge(int source, int edge, int distance);
    void print();
    void algorithm(int s);
};

// Constructor
Graph::Graph(int V)
    : V{V}
{
}
// Add edge on the graph
void Graph::add_edge(int source, int edge, int distance)
{
    adj.push_back(Pair(edge, source, distance));
}
// Dijksta algorithm

void Graph::algorithm(int s)
{
    int target = s;
    bool visited[V];
    int index;
    int dis[V];
    int min;
    // make all nodes unvisited and dis = INF
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
        dis[i] = INF;
    }
    // Make source visited and dis[source] = 0
    visited[target] = true;
    dis[target] = 0;

    for (int i = 0; i < V; i++)
    {
        // Find the minimun path of the target
        min = 1000;
        for (int j = 0; j < V; j++)
        {
            if (adj[j].source == target)
            {
                if (adj[j].distance < min)
                {
                    min = adj[j].distance;
                    index = adj[j].edge;
                }
            }
        }
        // Make the edge of the minimun distance as visited
        visited[index] = true;
        // update the distance
        for (int j = 0; j < V; j++)
        {
            if (dis[index] > dis[target] + min and !visited[j])
            {
                dis[index] = dis[target] + min;
            }
        }
        // update the target
        target = index;
    }
    // Display the minimun path
    cout << "Min path is: " << endl;
    for (int k = 0; k < V; k++)
    {
        if (dis[k] != INF)
        {
            cout << "Source: " << k << " ----->"
                 << " Distance : " << dis[k] << endl;
        }
    }
}
int main()
{
    int N{8};
    Graph g(N);
    g.add_edge(0, 1, 1);
    g.add_edge(0, 2, 2);
    g.add_edge(0, 3, 3);
    g.add_edge(1, 2, 1);
    g.add_edge(1, 4, 5);
    g.add_edge(2, 5, 1);
    g.add_edge(5, 6, 3);
    g.add_edge(5, 7, 1);
    g.algorithm(0);
}
