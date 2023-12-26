/*
  Given an array A of N integers. 
  Construct prefix sum of the array in the given array itself.
*/
#include <iostream>
#include <vector>

class PrefixSum{
public:
  PrefixSum(){

  }
  ~PrefixSum(){

  }

  std::vector<int> solve(std::vector<int> &arr);
};

std::vector<int> PrefixSum::solve(std::vector<int> &arr){
  for(auto i=1; i<arr.size(); i++){
    arr[i] += arr[i-1];
  }

  return arr;
}

int main(){
  PrefixSum *p = new PrefixSum();
  std::vector<int> arr{1, 2, 3, 4, 5};
  std::cout << "Prefix sum of array {1, 2, 3, 4, 5} : " << std::endl;
  for(auto x: p->solve(arr)){
    std::cout << x << " ";
  }
  return 0;
}