/*
You are given a N X N integer matrix. You have to find 
the sum of all the minor diagonal elements of A.
Minor diagonal of a M X M matrix A is a collection of elements 
A[i, j] such that i + j = M + 1 (where i, j are 1-based).
*/

#include <iostream>
#include <vector>

class MinorDiagonalSum{
  public : 
    MinorDiagonalSum(){}
    ~MinorDiagonalSum(){}
    int solve(std::vector<std::vector<int>> &arr);
};

int MinorDiagonalSum::solve(std::vector<std::vector<int>> &arr){
  int sum = 0, i=0, j=arr.size()-1;
  while(i<arr.size()){
    sum += arr[i][j];
    i++;
    j--;
  }
  return sum;
}

int main(){
  MinorDiagonalSum *m = new MinorDiagonalSum();
  std::vector<std::vector<int>> arr{{1, -2, -3},
      {-4, 5, -6},
      {-7, -8, 9}};
  std::cout << "Sum of anti diagonal elements : " << m->solve(arr) << std::endl;

  return 0;
}