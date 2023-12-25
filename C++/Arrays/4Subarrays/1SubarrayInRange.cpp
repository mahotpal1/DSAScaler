/*
Given an array A of length N, return the subarray from B to C.

Example Input
Input 1:
A = [4, 3, 2, 6]
B = 1
C = 3
Input 2:
A = [4, 2, 2]
B = 0
C = 1


Example Output
Output 1:
[3, 2, 6]
Output 2:
[4, 2]
*/

#include <iostream>
#include <vector>

class SubarrayInRange{
public :
  SubarrayInRange(){}
  ~SubarrayInRange(){}
  std::vector<int> solve(std::vector<int> &arr, int start, int end);
};

std::vector<int> SubarrayInRange::solve(std::vector<int> &arr, int s, int e){
  std::vector<int> ans;
  for(int i=s; i<=e; i++){
    ans.push_back(arr[i]);
  }
  return ans;
}

int main(){
  std::vector<int> arr{4, 3, 2, 6};
  SubarrayInRange *s = new SubarrayInRange();
  std::cout << "Subarray from 1 to 3 : " << std::endl;
  for(auto x : s->solve(arr, 1, 3)){
    std::cout << x << " ";
  }
  std::cout << std::endl;
  return 0;
}