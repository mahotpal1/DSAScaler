/*
Given an array A of N non-negative numbers and a non-negative number B,
you need to find the number of subarrays in A with a sum less than B.
We may assume that there is no overflow.

Example Input
Input 1:

 A = [2, 5, 6]
 B = 10
Input 2:

 A = [1, 11, 2, 3, 15]
 B = 10


Example Output
Output 1:

 4
Output 2:

 4
*/
#include <iostream>
#include <vector>

class CountingSubarrays{
  public : 
    CountingSubarrays(){}
    ~CountingSubarrays(){}
    int solve(std::vector<int> &arr, int B);
};

int CountingSubarrays::solve(std::vector<int> &arr, int B){
  int count_subarrays=0;
  for(int i=0; i<arr.size(); i++){
    int sum=0;
    for(int j=i; j<arr.size(); j++){
      sum += arr[j];
      if(sum < B){
        count_subarrays++;
      }
    }
  }
  
  return count_subarrays;
}

int main(){
  CountingSubarrays *c = new CountingSubarrays();
  std::vector<int> arr{1, 11, 2, 3, 15};
  std::cout << "Total subarrays : " << c->solve(arr, 10) << std::endl;
  return 0;
}