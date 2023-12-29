/*
Given an array A of length N. Also given are integers B and C.

Return 1 if there exists a subarray with length B having sum 
C and 0 otherwise

Example Input
Input 1:
A = [4, 3, 2, 6, 1]
B = 3
C = 11
Input 2:

A = [4, 2, 2, 5, 1]
B = 4
C = 6


Example Output
Output 1:
1
Output 2:

0
*/

#include <iostream>
#include <vector>

class SubarraySum{
  public : 
    SubarraySum(){}
    ~SubarraySum(){}
    bool solve(std::vector<int> &arr, int B, int C);
};

bool SubarraySum::solve(std::vector<int> &arr, int B, int C){
  if(arr.size() == 1 && arr[0] == C){
    return true;
  }
  int sum = 0;
  for(int i=0; i<B; i++){
    sum += arr[i];
  }
  int s=0, e=B;
  while(e < arr.size()){
    sum = sum - arr[s] + arr[e];
    s++; e++;
    if(sum == C){
      return true;
    }
  }
  return false;
}

int main(){
  SubarraySum *s = new SubarraySum();
  std::vector<int> arr{4, 3, 2, 6, 1};
  std::cout << "Is there exist the subarray sum equals 11 of length 3 : "
            << (s->solve(arr, 3, 11)?"Yes":"No") << std::endl;
}