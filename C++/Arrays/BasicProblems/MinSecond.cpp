/*
Given an integer array A of size N. In one second, you can increase
the value of one element by 1.

Find the minimum time in seconds to make all elements of the array 
equal.
*/
#include <iostream>
#include <vector>

class MinSecond{
public : 
  MinSecond(){}
  ~MinSecond(){}
  int solve(std::vector<int> &arr);
};

int MinSecond::solve(std::vector<int> &arr){
  int max = INT_MIN;
  for(auto x: arr){
    if(x > max){
      max = x;
    }
  }
  int sum=0;
  for(auto x: arr){
    sum += max-x;
  }

  return sum;
}

int main(){
  MinSecond *s = new MinSecond();
  std::vector<int> arr {2, 4, 1, 3, 2};
  std::cout << "Total seconds required in case of {2, 4, 1, 3, 2} : " << s->solve(arr) << std::endl;
}