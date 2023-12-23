/*
Given an integer array A containing N distinct integers, 
you have to find all the leaders in array A. An element is a leader 
if it is strictly greater than all the elements to its right side.
NOTE: The rightmost element is always a leader.
*/
#include <iostream>
#include <vector>

class LeadersInArray{
public:
  LeadersInArray(){}
  ~LeadersInArray(){}
  std::vector<int> solve(std::vector<int> &arr);
};

std::vector<int> LeadersInArray::solve(std::vector<int> &arr){
  std::vector<int> ans;
  int max = arr[arr.size()-1];
  ans.push_back(max);
  for(int i=arr.size()-2; i>=0; i--){
    if(arr[i] > max){
      max = arr[i];
      ans.push_back(max);
    }
  }
  return ans;
}

int main(){
  std::vector<int> arr{16, 17, 4, 3, 5, 2};
  LeadersInArray *l = new LeadersInArray();
  std::cout << "Leader Elements in {16, 17, 4, 3, 5, 2} : " << std::endl;
  for(auto x: l->solve(arr)){
    std::cout << x << " ";
  }
  return 0;
}