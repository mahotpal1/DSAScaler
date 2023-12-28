/*
Given an array A, find the size of the smallest subarray such that it
contains at least one occurrence of the maximum value of the array
and at least one occurrence of the minimum value of the array.
Problem Constraints
1 <= |A| <= 2000

Input 1:

A = [1, 3, 2]
Input 2:

A = [2, 6, 1, 6, 9]


Example Output
Output 1:

 2
Output 2:

 3
*/

#include <iostream>
#include <vector>

class ClosestMinMax{
  public : 
    ClosestMinMax(){}
    ~ClosestMinMax(){}
    int solve(std::vector<int> &arr);
};

int ClosestMinMax::solve(std::vector<int> &arr){
  int max=INT_MIN, min=INT_MAX;

  for(auto x: arr){
    if(x>=max){
      max = x;
    }
    if(x<=min){
      min = x;
    }
  }

  if(min == max){
    return 1;
  }

  int size_=arr.size();
  int min_i=-1, max_i=-1;

  for(int i=arr.size()-1; i>=0; i--){
    if(arr[i]==max){
      max_i=i;
      if(min_i!=-1){
        if(min_i-max_i+1 < size_){
          size_ = min_i-max_i+1;
        }
      }
      min_i = -1;
    }else if(arr[i] == min){
      min_i = i;
      if(max_i!=-1){
        if(max_i-min_i+1 < size_){
          size_ = max_i-min_i+1;
        }
      }
      max_i = i;
    }
  }
  return size_;
}

int main(){
  ClosestMinMax *c = new ClosestMinMax();
  std::vector<int> arr{2, 6, 1, 6, 9};
  std::cout << "The closestMinMax distance in the given array {2, 6, 1, 6, 9} is : " << c->solve(arr) << std::endl;
  return 0;
}