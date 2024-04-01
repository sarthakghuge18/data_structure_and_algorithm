#include <iostream>
#include <list>
using namespace std;

class graph
{
public:
    int vertices;
    list<int> *adjlist;

    graph(int v)
    {
        vertices = v;
        adjlist = new list<int>[v];
    }

    void input(int edge)
    {
        int src, dest;
        for (int i = 0; i < edge; i++)
        {
            cout << "start & end vertex for edge " << i + 1 << " : ";
            cin >> src >>dest;

            adjlist[src].push_back(dest);
            adjlist[dest].push_back(src);
        }
    }

    void display(int v)
    {
        for (int i = 0; i < v; i++)
        {
            cout << i << " -> ";
            for (const auto &vertex : adjlist[i])
            {
                cout << vertex<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{

    int ver;
    cout << "enter the vertice : ";
    cin >> ver;
    graph g(ver);

    int edge;
    cout << "enter the edge : ";
    cin >> edge;

    g.input(edge);

    g.display(ver);

    return 0;
}

//0 1 1 2 2 3 3 4 4 0 4 1