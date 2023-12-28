/*
Given an array of integers A, a subarray of an array is said to be good if it fulfills any one of the criteria:
1. Length of the subarray is be even, and the sum of all the elements of the subarray must be less than B.
2. Length of the subarray is be odd, and the sum of all the elements of the subarray must be greater than B.
Your task is to find the count of good subarrays in A.

Example Input
Input 1:
A = [1, 2, 3, 4, 5]
B = 4
Input 2:

A = [13, 16, 16, 15, 9, 16, 2, 7, 6, 17, 3, 9]
B = 65


Example Output
Output 1:
6
Output 2:

36
*/

#include <iostream>
#include <vector>

class GoodSubarrays{
  public :
    GoodSubarrays(){}
    ~GoodSubarrays(){}
    int solve(std::vector<int> &arr, int B);
};

int GoodSubarrays::solve(std::vector<int> &arr, int B){
  int good_sub_array=0;
  for(int i=0; i<arr.size(); i++){
    int sum=0;
    int count=0;
    for(int j=i; j<arr.size(); j++){
      sum+=arr[j];
      count++;
      if(count%2 == 0){
        if(sum < B){
          good_sub_array++;
        }
      }else{
        if(sum > B){
          good_sub_array++;
        }
      }
    }
  }
  return good_sub_array;
}

int main(){
  GoodSubarrays *g = new GoodSubarrays();
  std::vector<int> arr{13, 16, 16, 15, 9, 16, 2, 7, 6, 17, 3, 9};
  std::cout << "Count of Good Subarrays : " << g->solve(arr, 65) << std::endl;
  return 0; 
}