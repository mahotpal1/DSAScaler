/*
Given an array A of size N, find the subarray of size B
with the least average.

Example Input
Input 1:
A = [3, 7, 90, 20, 10, 50, 40]
B = 3
Input 2:
A = [3, 7, 5, 20, -10, 0, 12]
B = 2


Example Output
Output 1:
3
Output 2:
4
*/

#include <iostream>
#include <vector>

class SubarrayWithLeastAverage{
  public : 
  SubarrayWithLeastAverage(){}
  ~SubarrayWithLeastAverage(){}
  int solve(std::vector<int> &arr, int B);
};

int SubarrayWithLeastAverage::solve(std::vector<int> &arr, int B){
  float sum = 0;
  for(int i=0; i<B; i++){
    sum += arr[i];
  }
  float ans = sum/arr.size();
  int s=0, e=B, result=s;
  while(e < arr.size()){
    sum = sum-arr[s]+arr[e];
    if(sum/arr.size() < ans){
      ans = sum/arr.size();
      result = s;
    }
    s++; e++;
  }
  return result+1;
}

int main(){
  SubarrayWithLeastAverage *s = new SubarrayWithLeastAverage();
  std::vector<int> arr{3, 7, 90, 20, 10, 50, 40};
  std::cout << "Subarray starting index for given vector : " << s->solve(arr, 3) << std::endl;

  return 0;
}