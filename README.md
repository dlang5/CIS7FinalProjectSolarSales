Dennis Lang
Spring 2020
Final Project
Solar Sales

//This project involves the case of a solar panel salesman. The salesman lives in the city of Riverside, and
markets to homeowners in Moreno Valley, Perris, Hemet, as well as his home city of Riverside.

//If the salesman starts and ends in his hometown each day, determine all possible trip variations for the salesman's
workday. Determine breadth first search, shortest path, and the most low cost trips for the marketing specialist.

//This program represents each possible trip, including low cost and shortest path including matrices and adjacencies.

//Progamming approaches include storing float values, mapping the matrix, storing values in arrays and doing math with
the stored variables, and using combinatrics to solve the problem.

/////Explain solution and more programming approaches here.

Information:

Riverside is 18.7 miles away from Perris. floatRP == floatPR == 18.7
Riverside is 10.6 miles away from Moreno Valley. floatRM == floatMR == 10.6
Riverside is 33.8 miles away from Hemet. floatRH == floatHR == 33.8

Perris is 15.6 miles away from Moreno Valley. floatPM == floatMP == 15.6
Perris is 16.5 miles away from Hemet. floatPH == floatHP == 16.5

Moreno Valley is 23.7 miles away from Hemet. floatMH == floatHM == 23.7

after finding these I determined its probably smarter to use average travel time.

travel time in minutes between cities:

RP = 20;
RM = 14;
RH = 39;

PM = 17;
PH = 26;

MH = 30;

