#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

//user input of ID
int cityNum;

//define 0,1,2,3, from closest to farthest from home
//array would be sorted by distance from starting city if appended to
//this could be accomplished with a sort and pointers
const char *city[4] = {"Riverside","Moreno Valley","Perris","Hemet"};

//Implements the vertex structure, gives the point two values and a pointer
struct Vertex {
    int val, cost;
    Vertex* next;
};

//the edges contains three values, the source, destination, and distance
struct Edge {
    int src, dest, weight;
};

//the graph class allows the graph to be "drawn" in the mind of the program
//linked vertices are held together according to a later list of values
class Graph
{
    Vertex* getAdjListVertex(int value, int weight, Vertex* head)
    {
        Vertex* newVertex = new Vertex;
        newVertex->val = value;
        newVertex->cost = weight;
        newVertex->next = head;
        return newVertex;
    }
int N;

//the drawing of the graph
public:
    Vertex **head;
    Graph(Edge weightedList[], int n, int N)
    {
        head = new Vertex*[N]();
        this->N = N;

        for (int i = 0; i < N; ++i)
            head[i] = nullptr;

        for (unsigned i = 0; i < n; i++)
        {
            int src = weightedList[i].src;
            int dest = weightedList[i].dest;
            int weight = weightedList[i].weight;
            Vertex* newVertex = getAdjListVertex(dest, weight, head[src]);
            head[src] = newVertex;
        }
    }
};

//this function keys out the specific distances between the city chosen and each other city
void travelTimes(Vertex* ptr, int cityNum)
{
    while (ptr != nullptr)
    {
        cout << "" << city[cityNum] << " to " << city[ptr->val] << " is a " << ptr->cost << " minute drive. \n";
        ptr = ptr->next;
    }
    cout << endl;
}

//this function keys out the most efficient route by adding up the shortest trip back to Riverside
void mostEfficientRoute(Vertex* ptr)
{
    while (ptr != nullptr)
    {
        cout << " > " << city[ptr->val] << "(" << ptr->val << ")";
        ptr = ptr->next; 
    }
}

//this function sorts the weighted edges from high to low
void shortestPath(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << city[v] << "(" << v << ")" << " -> " << city[V] << "(" << V << ")" << endl;
    }
}

//this function displays the map
void mapMaker(Vertex* ptr, int i)
{
    while (ptr != nullptr)
    {
        cout << "(" << i << "," << ptr->val << "," << ptr->cost << "m" << ")";
        ptr = ptr->next;
    }
    cout << endl;
}

//calling the functions neatly and with the proper city names with ID listed
//generic functions are called at the end, with custom output based on the city chosen keyed out first
int main()
{
    //this is a list of the edges of the graph, connecting the weight each way
    Edge weightedList[] =
    {
        { 0, 1, 14 }, { 0, 2, 20 }, { 0, 3, 39 }, { 1, 0, 14 }, { 1, 2, 17 }, { 1, 3, 30 },
        { 2, 0, 20 }, { 2, 1, 17 }, { 2, 3, 26 }, { 3, 0, 39 }, { 3, 1, 30 }, { 3, 2, 26 },
    };
  
    cout << "Welcome to the Team Dennis Solar Sales Assistance App.\n\nHere is the legend for the cities currently being canvassed:\n\n";
    int N = 4;
    int n = sizeof(weightedList)/sizeof(weightedList[0]);
    Graph graph(weightedList, n, N);
    for (int i = 0; i < N; i++)
    {
    cout << city[i] << "(" << i << ")\n";
    }

    cout << "\nPlease type the ID number of your current location and press the Enter key: ";
    cin >> cityNum;

    {
      if(cityNum == 0)
        {
        cout << endl << "Most efficient way to complete route, starting in: " << city[cityNum] << "(" << cityNum << ")";
        mostEfficientRoute(graph.head[cityNum]);
        cout << " > " << city[cityNum] << "("<< cityNum << ")\n";
        }
        else
        {
        cout << endl << "Most efficient way to complete route, starting in: " << city[cityNum] << "(" << cityNum << ")";
        mostEfficientRoute(graph.head[cityNum]);
        cout << endl;
        }
        
        //this takes the user's inputted city and gives the travel time for that city only
        //the weightedList in my graph are the minutes between cities, so my Map is based on time
        cout << "\n'Current' Travel Times based on your entered city:\n";
        for (int i = cityNum; i < cityNum+1; i++)
        {
            travelTimes(graph.head[i], i);
        }

        cout << "|Reference guides|\n";
        
        cout << "\nMatrix Map:\n";
        for (int i = 0; i < N; i++)
        {
            mapMaker(graph.head[i], i);;
        }

        cout << "\nRound trips ranked from least to most efficient:\n";
        for (int i = 1; i < N; i++)
        {
            cout << city[0] << "(0) > ";
            cout << city[i] << "(" << i << ")";;
            mostEfficientRoute(graph.head[i]);
            cout << endl;
        }

        cout << "\nTrip Planner/Representer:\n";
        for (int i = 0; i < N; i++)
        {
            cout << city[i] << "(" << i << ")";
            mostEfficientRoute(graph.head[i]);
            cout << endl;
        }

        cout << "\nShortest Paths, ranked best to worst:\n";
        for (int i = 0; i < 4; i++)
        {
            vector<int> adj[i];
            shortestPath(adj, i);
        }
}
return 0;
}
