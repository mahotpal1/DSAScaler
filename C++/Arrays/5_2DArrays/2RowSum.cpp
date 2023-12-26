/*
Example Input
Input 1:

[1,2,3,4]
[5,6,7,8]
[9,2,3,4]


Example Output
Output 1:

[10,26,18]
*/

#include <iostream>
#include <vector>

class RowSum{
  public : 
    RowSum(){}
    ~RowSum(){}
    std::vector<int> solve(std::vector<std::vector<int>> &arr);
};

std::vector<int> RowSum::solve(std::vector<std::vector<int>> &arr){
  std::vector<int> ans;

  for(int i=0; i<arr.size(); i++){
    int sum=0;
    for(int j=0; j<arr[0].size(); j++){
      sum+=arr[i][j];
    }
    ans.push_back(sum);
  }
  return ans;
}

int main(){
  std::vector<std::vector<int>> arr{{1,2,3,4},{5,6,7,8},{9,2,3,4}};
  RowSum *r = new RowSum();
  std::cout << "Row wise sum of the matrix is : " << std::endl;
  std::cout << "[ ";
  for(auto x: r->solve(arr)){
    std::cout << x << " ";
  }
  std::cout << "]" <<std::endl;

  return 0;
}