/*
Given a 2D integer array A, return the transpose of A.

The transpose of a matrix is the matrix flipped over its
main diagonal, switching the matrix's row and column indices.

Example Input
Input 1:

A = [[1, 2, 3],[4, 5, 6],[7, 8, 9]]
Input 2:

A = [[1, 2],[1, 2],[1, 2]]


Example Output
Output 1:

[[1, 4, 7], [2, 5, 8], [3, 6, 9]]
Output 2:

[[1, 1, 1], [2, 2, 2]]
*/

#include <iostream>
#include <vector>

using namespace std;

class Transpose{
public:
  Transpose(){}
  ~Transpose(){}
  std::vector<std::vector<int>> solve(std::vector<std::vector<int>> &arr);
};

void swap(int *x, int *y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

std::vector<std::vector<int>> Transpose::solve(std::vector<std::vector<int>> &arr){
  if(arr.size() != arr[0].size()){
    return {{}};
  }
  for(int i=0; i<arr.size(); i++){
    for(int j=i; j<arr[0].size(); j++){
      swap(arr[i][j], arr[j][i]);
    }
  }
  return arr;
}

int main(){
  Transpose *t = new Transpose();
  std::vector<std::vector<int>> arr{{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
  std::cout << "The transpose of given matrix : " << std::endl;
  for(auto x : t->solve(arr)){
    for(auto y : x){
      std::cout << y << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}