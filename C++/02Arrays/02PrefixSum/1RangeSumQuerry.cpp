/*
You are given an integer array A of length N.
You are also given a 2D integer array B with dimensions M x 2, 
where each row denotes a [L, R] query.
For each query, you have to find the sum of all elements from L to R 
indices in A (0 - indexed).
More formally, find A[L] + A[L + 1] + A[L + 2] +... + A[R - 1] + A[R]
 for each query.
*/
#include <iostream>
#include <vector>

class RangeSumQuerry{
public:
  RangeSumQuerry(){}
  ~RangeSumQuerry(){}
  std::vector<int> solve(std::vector<int> &arr, std::vector<std::vector<int>> &B);
};

std::vector<int> RangeSumQuerry::solve(std::vector<int> &arr, std::vector<std::vector<int>> &B){
  std::vector<int> pf(arr.size());
  pf[0] = arr[0];
  for(int i=1; i<arr.size(); i++){
    pf[i] = arr[i]+pf[i-1];
  }
  std::vector<int> ans(B.size());
  for(int i=0; i<B.size(); i++){
    if(B[i][0] == 0){
      ans[i] = pf[B[i][1]];
    }else{
      ans[i] = pf[B[i][1]]-pf[B[i][0]-1];
    }
  }
  return ans;
}

int main(){
  std::vector<int> arr{2, 2, 2};
  std::vector<std::vector<int>> B{{0, 0}, {1, 2}};

  RangeSumQuerry *r = new RangeSumQuerry();
  std::cout << "Sum of Elements in the given range : " << std::endl;

  for(auto x : r->solve(arr, B)){
    std::cout << x << " ";
  }

  return 0; 
}