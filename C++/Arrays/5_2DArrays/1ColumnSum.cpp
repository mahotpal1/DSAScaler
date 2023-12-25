/*
You are given a 2D integer matrix A, return a 1D integer array 
containing column-wise sums of original matrix.

Example Input
Input 1:

[1,2,3,4]
[5,6,7,8]
[9,2,3,4]


Example Output
Output 1:

{15,10,13,16}
*/

#include <iostream>
#include <vector>

class ColumnSum{
  public : 
    ColumnSum(){}
    ~ColumnSum(){}
    std::vector<int> solve(std::vector<std::vector<int>> &arr);
};

std::vector<int> ColumnSum::solve(std::vector<std::vector<int>> &arr){
  std::vector<int> ans;
  for(int i=0; i<arr[0].size(); i++){
    int sum=0;
    for(int j=0; j<arr.size(); j++){
      sum += arr[j][i];
    }
    ans.push_back(sum);
  } 
  return ans;
}

int main(){
  std::vector<std::vector<int>> arr{{1,2,3,4}, {5,6,7,8}, {9,2,3,4}};
  ColumnSum *c = new ColumnSum(); 
  std::cout << "Sum of Elements Column Wise : " << std::endl;
  std::cout << "[ ";
  for(auto x : c->solve(arr)){
    std::cout << x << " ";
  }
  std::cout << "]" << std::endl;
  return 0;
}