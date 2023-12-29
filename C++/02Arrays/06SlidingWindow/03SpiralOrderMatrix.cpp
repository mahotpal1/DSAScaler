/*
Given an integer A, generate a square matrix filled with elements
from 1 to A2 in spiral order and return the generated square 
matrix.

Example Input
Input 1:
1
Input 2:
2
Input 3:
5

Example Output
Output 1:
[ [1] ]
Output 2:
[ [1, 2], 
  [4, 3] ]
Output 2:
[ [1,   2,  3,  4, 5], 
  [16, 17, 18, 19, 6], 
  [15, 24, 25, 20, 7], 
  [14, 23, 22, 21, 8], 
  [13, 12, 11, 10, 9] ]

Hint : 
  Run dour cycles to print the spiral.
*/

#include <iostream>
#include <vector>

class SpiralMatrix{
  public : 
  SpiralMatrix(){}
  ~SpiralMatrix(){}
  std::vector<std::vector<int>> solve(int B);
};

std::vector<std::vector<int>> SpiralMatrix::solve(int B){
  int n=1, i=0, j=0;
  int size=B;
  std::vector<std::vector<int>> arr(B, std::vector<int> (B));
  while(size>1){
    for(int k=1; k<size; k++){
      arr[i][j] = n;
      j++;
      n++;
    }
    for(int k=1; k<size; k++){
      arr[i][j] = n;
      i++;
      n++;
    }
    for(int k=1; k<size; k++){
      arr[i][j] = n;
      j--;
      n++;
    }
    for(int k=1; k<size; k++){
      arr[i][j] = n;
      i--;
      n++;
    }
    i++; j++;
    size -= 2;
  }
  if(size == 1){
    arr[i][j] = n;
  }

  return arr;
}


int main(){
  SpiralMatrix *m = new SpiralMatrix();
  std::cout << "Generate the matrix with given conditions of size 5 : " << std::endl;
  for(auto x: m->solve(5)){
    for(auto y: x){
      std::cout << y << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}