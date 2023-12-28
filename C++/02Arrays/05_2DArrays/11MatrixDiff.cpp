/*
You are given two matrices A & B of same size, 
you have to return another matrix which is the sum of A and B.

Example Input

Input 1:
A = [[1, 2, 3],   
     [4, 5, 6],   
     [7, 8, 9]]  
B = [[9, 8, 7],   
     [6, 5, 4],   
     [3, 2, 1]]
Input 2:
A = [[1, 2, 3],   
     [4, 1, 2],   
     [7, 8, 9]]  
B = [[9, 9, 7],   
     [1, 2, 4],   
     [4, 6, 3]]
 
Example Output
Output 1:
[[10, 10, 10],   
 [10, 10, 10],   
 [10, 10, 10]]
Output 2:
[[10, 11, 10],   
 [5,   3,  6],   
 [11, 14, 12]]
*/
#include <iostream>
#include <vector>

class MatrixSum{
  public : 
    MatrixSum(){}
    ~MatrixSum(){}
    std::vector<std::vector<int>> solve(std::vector<std::vector<int>> &arr1, std::vector<std::vector<int>> &arr2); 
};

std::vector<std::vector<int>> MatrixSum::solve(std::vector<std::vector<int>> &arr1, std::vector<std::vector<int>> &arr2){
  if(arr1.size()!=arr2.size() || arr1[0].size()!=arr2[0].size()){
    return {{}};
  }
  for(auto i=0; i<arr1.size(); i++){
    for(auto j=0; j<arr1[0].size(); j++){
      arr1[i][j] -= arr2[i][j];
    }
  }
  return arr1;
}

int main(){
  MatrixSum *m = new MatrixSum();
  std::vector<std::vector<int>> arr1{
  {10, 10, 10},   
  {10, 10, 10},   
  {10, 10, 10}
  };
  std::vector<std::vector<int>> arr2{
  {10, 11, 10},   
  {5,   3,  6},   
  {11, 14}
  };
  std::cout << "Sum of bith the matrix is : " << std::endl;

  for(auto x : m->solve(arr1, arr2)){
    for(auto y: x){
      std::cout << y << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}