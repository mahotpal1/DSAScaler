/*
You are given an integer array C of size A. Now you need to find a subarray (contiguous elements) so that the sum of contiguous elements is maximum.
But the sum must not exceed B.

Example Input
Input 1:
A = 5
B = 12
C = [2, 1, 3, 4, 5]
Input 2:

A = 3
B = 1
C = [2, 2, 2]


Example Output
Output 1:
12
Output 2:

0
*/
#include <iostream>
#include <vector>

class MaximumSubarraysEasy{
public : 
  MaximumSubarraysEasy(){}
  ~MaximumSubarraysEasy(){}
  int solve(std::vector<int> &arr, int B);
};

int MaximumSubarraysEasy::solve(std::vector<int> &arr, int B){
  int max=0, sum;
  for(int i=0; i<arr.size(); i++){
    sum=0;
    for(int j=i; j<arr.size(); j++){
      sum += arr[j];
      if(sum>max && sum<=B){
        max = sum;
      }
      if(sum > B){
        break;
      }
    }
  }
  return max;
}

int main(){
  MaximumSubarraysEasy *m = new MaximumSubarraysEasy();
  std::vector<int> arr1{2, 1, 3, 4, 5};
  std::cout << "Maximum sum out of subarrays in given array : " << m->solve(arr1, 12) << std::endl;
  arr1 = {2, 2, 2};
  std::cout << "Maximum sum out of subarrays in given array : " << m->solve(arr1, 1) << std::endl;
  return 0;
}