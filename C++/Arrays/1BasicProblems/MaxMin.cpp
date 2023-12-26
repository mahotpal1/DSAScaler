/*
Given an array A of size N. You need to
find the sum of Maximum and Minimum element in the given array.
*/

#include <iostream>
#include <vector>

class MaxMin{
public :
  MaxMin(){}
  ~MaxMin(){}
  int solve(std::vector<int> &arr);
};

int MaxMin::solve(std::vector<int> &arr){
  int max=INT_MIN, min=INT_MAX;
  for(auto x: arr){
    if(min>x){
      min = x;
    }
    if(max < x){
      max = x;
    }
  }

  return max+min;
}

int main(){
  MaxMin *m = new MaxMin();
  std::vector<int> arr{-2, 1, -4, 5, 3};
  std::cout << "Sum of max and min in array {-2, 1, -4, 5, 3} : " << m->solve(arr) << std::endl;
  return 0;
}