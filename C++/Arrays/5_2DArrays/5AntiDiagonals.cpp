/*
Give a N * N square matrix A, return an array of its anti-diagonals. 
Look at the example for more details.

Example Input
Input 1:
1 2 3
4 5 6
7 8 9
Input 2:
1 2
3 4

Example Output
Output 1:
1 0 0
2 4 0
3 5 7
6 8 0
9 0 0
Output 2:
1 0
2 3
4 0
*/

#include <iostream>
#include <vector>

class AntiDiagonals{
  public : 
    AntiDiagonals(){}
    ~AntiDiagonals(){}
    int solve(std::vector<std::vector<int>> &arr);
};