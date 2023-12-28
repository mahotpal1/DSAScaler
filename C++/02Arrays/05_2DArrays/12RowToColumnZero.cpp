/*
You are given a 2D integer matrix A, make all the elements in a row or 
column zero if the A[i][j] = 0. 
Specifically, make entire ith row and jth column zero.

Example Input
Input 1:

[1,2,3,4]
[5,6,7,0]
[9,2,0,4]


Example Output
Output 1:

[1,2,0,0]
[0,0,0,0]
[0,0,0,0]
*/
#include <iostream>
#include <vector>

class RowToColumnZero{
  public : 
    RowToColumnZero(){}
    ~RowToColumnZero(){}
    std::vector<std::vector<int>> solve(std::vector<std::vector<int>> &arr);
};

std::vector<std::vector<int>> RowToColumnZero::solve(std::vector<std::vector<int>> &arr){
  std::vector<int> irr(arr.size()), jrr(arr[0].size());
  for(auto i=0; i<arr.size(); i++){
    for(auto j=0; j<arr[0].size(); j++){
      if(arr[i][j] == 0){
        irr[i] = -1;
        jrr[j] = -1;
      }
    }
  }

  for(auto i=0; i<arr.size(); i++){
    if(irr[i] == -1){
      for(int j=0; j<arr[i].size(); j++){
        arr[i][j] = 0;
      }
    }
  }
  for(auto i=0; i<arr[0].size(); i++){
    if(jrr[i] == -1){
      for(int j=0; j<arr.size(); j++){
        arr[j][i] = 0;
      }
    }
  }
  return arr;
}

int main(){
  std::vector<std::vector<int>> arr{
  {1,2,3,4},
  {5,6,7,0},
  {9,2,0,4}
  };

  RowToColumnZero *r = new RowToColumnZero();

  for(auto x: r->solve(arr)){
    for(auto y: x){
      std::cout << y << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}