/*
You are given an integer array A of length N.
You have to find the sum of all subarray sums of A.
More formally, a subarray is defined as a contiguous part of an array which we can obtain by deleting zero or more elements from either end of the array.
A subarray sum denotes the sum of all the elements of that subarray.

Note : Be careful of integer overflow issues while calculations. Use appropriate datatypes.
*/
#include <iostream>
#include <vector>

class SumOfAllSubarrays{
public :
  SumOfAllSubarrays(){}
  ~SumOfAllSubarrays(){}
  int solve(std::vector<int> &arr);
};

int SumOfAllSubarrays::solve(std::vector<int> &arr){
  int sum = 0;
  for(int i=0; i<arr.size(); i++){
    int freq = (i+1)*(arr.size()-i);
    sum += freq*arr[i];
  }
  return sum;
}

int main(){
  std::vector<int> arr{1, 2, 3};
  SumOfAllSubarrays *s = new SumOfAllSubarrays();
  std::cout << "Total sum of subarrays : " << s->solve(arr) << std::endl;
  return 0;
}