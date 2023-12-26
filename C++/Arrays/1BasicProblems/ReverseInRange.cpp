/*
Given an array A of N integers and also given two integers B and C. 
Reverse the elements of the array A within the given inclusive range [B, C].
*/
#include<iostream>
#include <vector>

class ReverseInRange{
public:
  ReverseInRange(){}
  ~ReverseInRange(){}
  std::vector<int> solve(int a, int b, std::vector<int> &arr);
};

std::vector<int> ReverseInRange::solve(int a, int b, std::vector<int> &arr){
  int start=a, end=b;

  while(start<end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }

  return arr;
}

int main(){
  ReverseInRange *r = new ReverseInRange();
  std::vector<int> arr{1, 2, 3, 4};
  std::cout << "Reverse of array [1, 2, 3, 4] from index 2 to 3 : " << std::endl;
  for(auto x: r->solve(2,3,arr)){
    std::cout << x << " ";
  }
  return 0;
}