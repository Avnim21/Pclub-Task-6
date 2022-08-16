You are an architect. There has been a recent increase in the number of earthquakes. You have been hired to work on n buildings. You can either demolish and rebuild, or maintain a building. You are given the number of floors and the danger level of each building. A building with a danger level greater than or equal to 7 should be demolished and rebuilt. While a building with danger level less than 7 can either be demolished and rebuilt or just be maintained. 
The demolishing cost of a floor is 10000, the rebuilding cost of a floor is 50000, and the maintenance cost of a floor is danger level*5000. 
You have to propose a solution with the least costing. Write a program for the same.
Input:
The first line of input contains number of buildings(n) followed by n lines of the input where each line contains information about the number of floors in a building followed by space and its danger level.
[n
 b[i] d[i]...]
Output:
Cost for the solution
Constraints:
0<n<1000000
0<b[i]<100
0<d[i]<11
Example:
Input:
5
14 2
25 6
10 9
12 8
6 4
Output:
2330000
Explanation:
3rd and 4th buildings will be demolished except them other buildings will be maintained.
	
