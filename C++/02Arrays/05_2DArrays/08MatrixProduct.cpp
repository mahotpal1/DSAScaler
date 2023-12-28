/*
You are given a matrix A and and an integer B, you
have to perform scalar multiplication of matrix A with an integer B.

Example Input
Input 1:

A = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]
B = 2 
Input 2:
A = [[1]]
B = 5 


Example Output
Output 1:
[[2, 4, 6], 
[8, 10, 12], 
[14, 16, 18]]
Output 2:
[[5]]
*/
#include <iostream>
#include <vector>

class ScalerProduct{
  public : 
    ScalerProduct(){}
    ~ScalerProduct(){}
    std::vector<std::vector<int>> solve(std::vector<std::vector<int>> &arr, int B);
};

std::vector<std::vector<int>> ScalerProduct::solve(std::vector<std::vector<int>> &arr, int B){
  for(int i=0; i<arr.size(); i++){
    for(int j=0; j<arr[0].size(); j++){
      arr[i][j] *= B;
    }
  }
  return arr;
}

int main(){
  ScalerProduct *r = new ScalerProduct();
  std::vector<std::vector<int>> arr{
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  
  std::cout << "The scaler product is : " << std::endl;

  for(auto x : r->solve(arr, 2)){
    for(auto y : x){
      std::cout << y << "";
    }
    std::cout << std::endl;
  }
  return 0;
}