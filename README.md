Dennis Lang
Spring 2020
Final Project
Solar Sales

This project involves the case of a solar panel salesman. The salesman lives in the city of Riverside, and
markets to homeowners in Moreno Valley, Perris, Hemet, as well as his home city of Riverside.

If the salesman starts and ends in his hometown each day, determine all possible trip variations for the salesman's
workday. Determine breadth first search, shortest path, and the most low cost trips for the marketing specialist.

This program represents each possible trip, including low cost and shortest path including matrices and adjacencies.

The graph, along with vertices and edges are the major structures involed in this project. Graphs are defined by the vertices and the edges that connect them, as well as any possible weight (representing a distance or travel time) of the edges. Using an undirected graph as each distance is the same in each direction, the vertices and edge values are all stored. An adjacency list is also used to "draw" the graph into the program, giving it an idea of what vertices are connected and which are not. The program uses traversal as well to determine the routes that are possible and giving a possible route for the solar salesman. The program also uses decision trees internally, as the shortest route and breadth-first route are both calculated by the weighted edges which determines what the program tells the user, depending on the given input.

Other progamming techniques used include storing float values, storing weighted edges and vertice values into a graph, linking stored strings in an array to each vertex.

Reference Code Sources:

https://www.softwaretestinghelp.com/graph-implementation-cpp/
https://stackoverflow.com/questions/50221136/c-weighted-stdshuffle
https://repl.it/@ProfKaseyNguyen/JH-Solar-Sales
-> Week 6 Notes
-> Week 6 Lab

Information Sources:

Riverside is 18.7 miles away from Perris. floatRP == floatPR == 18.7
Riverside is 10.6 miles away from Moreno Valley. floatRM == floatMR == 10.6
Riverside is 33.8 miles away from Hemet. floatRH == floatHR == 33.8
Perris is 15.6 miles away from Moreno Valley. floatPM == floatMP == 15.6
Perris is 16.5 miles away from Hemet. floatPH == floatHP == 16.5

https://maps.google.com/

Moreno Valley is 23.7 miles away from Hemet. floatMH == floatHM == 23.7
after finding these I determined its probably smarter to use average travel time.
travel time in minutes between cities:
RP = 20;
RM = 14;
RH = 39;
PM = 17;
PH = 26;
MH = 30;

https://trafficpredict.com/
