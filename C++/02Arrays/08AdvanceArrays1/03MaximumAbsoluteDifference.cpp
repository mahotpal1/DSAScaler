/*
You are given an array of N integers, A1, A2, .... AN.

Return the maximum value of f(i, j) for all 1 ≤ i, j ≤ N. 
f(i, j) is defined as |A[i] - A[j]| + |i - j|, where |x| denotes 
absolute value of x.

Input 1:
A = [1, 3, -1]
Input 2:
A = [2]

Example Output
Output 1:
5
Output 2:
0
*/

#include <iostream>
#include <vector>

class MaximumAbsoluteDifference{
  public : 
    MaximumAbsoluteDifference(){}
    ~MaximumAbsoluteDifference(){}
    int solve(std::vector<int> &arr);
};

int MaximumAbsoluteDifference::solve(std::vector<int> &arr){
  int maxxi=INT_MIN, maxyi=INT_MIN, minxi=INT_MAX, minyi=INT_MAX;
  int ans;
  for(int i=0; i<arr.size(); i++){
    int xi = arr[i] + i;
    int yi = arr[i] - i;
    maxxi = std::max(xi, maxxi);
    maxyi = std::max(yi, maxyi);
    minxi = std::min(xi, minxi);
    minyi = std::min(yi, minyi);
    ans = std::max((maxxi-minxi), (maxyi-minyi));
  }
  return ans;
}

int main(){

  std::vector<int> arr{1, 3, -1};
  MaximumAbsoluteDifference *m = new MaximumAbsoluteDifference();

  std::cout << "Maximum avsolute difference = " << m->solve(arr) << std::endl;

  return 0;
}