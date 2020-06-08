Dennis Lang

Spring 2020

Final Project

Solar Sales

Version 1.3

This project involves the case of a solar panel salesman. The salesman lives in the city of Riverside, and
markets to homeowners in Moreno Valley, Perris, Hemet, as well as his home city of Riverside.

![alt text](https://i.imgur.com/DUcfNAv.png)

If the salesman starts and ends in his hometown each day, determine all possible trip variations for the salesman's
workday.This program represents each possible trip, including low cost and shortest path including matrices and adjacencies.

To use the program, simply key in ID number of the city you are currently in, press "enter", and the program will do the rest for you.


About this program:

The graph, along with vertices and edges are the major structures involed in this project. Graphs are defined by the vertices and the edges that connect them, as well as any possible weight (representing a distance or travel time) of the edges. Using an undirected graph as each distance is the same in each direction, the vertices and edge values are all stored. An adjacency list is also used to "draw" the graph into the program, giving it an idea of what vertices are connected and which are not. The program uses traversal as well to determine the routes that are possible and giving a possible route for the solar salesman. The program also uses decision trees internally, as the shortest route and breadth-first route are both calculated by the weighted edges which determines what the program tells the user, depending on the given input.

Other progamming techniques used the use of Dijkstra's algorithm to determine shortest/cheapest paths, storing weighted edges and vertice values into a graph, and linking stored strings in an array to each vertex.

Reference Code Sources:

https://www.softwaretestinghelp.com/graph-implementation-cpp/


https://stackoverflow.com/questions/50221136/c-weighted-stdshuffle


https://repl.it/@ProfKaseyNguyen/JH-Solar-Sales


[&lt;Dijkstra’s algorithm example&gt;](https://www.geeksforgeeks.org/c-program-for-dijkstras-shortest-path-algorithm-greedy-algo-7/)


[&lt;Week 6 Notes&gt;](https://rccd.instructure.com/courses/21484/pages/chapter-16-notes?module_item_id=771022)


[&lt;Week 6 Lab&gt;](https://rccd.instructure.com/courses/21484/pages/chapter-16-notes?module_item_id=771022)

Flowchart:


![alt text](https://i.imgur.com/FdhLiII.png)

Information Sources:

Riverside is 18.7 miles away from Perris. floatRP == floatPR == 18.7

Riverside is 10.6 miles away from Moreno Valley. floatRM == floatMR == 10.6

Riverside is 33.8 miles away from Hemet. floatRH == floatHR == 33.8

Perris is 15.6 miles away from Moreno Valley. floatPM == floatMP == 15.6

Perris is 16.5 miles away from Hemet. floatPH == floatHP == 16.5\

Moreno Valley is 23.7 miles away from Hemet. floatMH == floatHM == 23.7

https://maps.google.com/


after finding these I determined its probably smarter to use average travel time.


travel time in minutes between cities:

RP = 20;

RM = 14;

RH = 39;

PM = 17;

PH = 26;

MH = 30;

https://trafficpredict.com/

Future improvements planned:

Implement API for location/distance (google/apple maps)

Add more locations dynamically from a database

Explain code, perhaps relearn maps and include in the improved code

Add AI route tracking using machine learning (N = 1000+)

Version history: 

Version 1.0 Basic

Version 1.1 Combined functions

Version 1.2 Converted Text to String

Version 1.3 Implementation of Matrix Map
