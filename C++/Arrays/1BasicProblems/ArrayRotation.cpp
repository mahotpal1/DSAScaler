/*
Given an integer array A of size N and an integer B, you have to return
the same array after rotating it B times towards the right
*/
#include <iostream>
#include <vector>

class ArrayRotation{
public :
  ArrayRotation(){}
  ~ArrayRotation(){}
  std::vector<int> reverse(int start, int end, std::vector<int> &arr);
  std::vector<int> rotateArr(int k, std::vector<int> &arr);
};

std::vector<int> ArrayRotation::reverse(int s, int e, std::vector<int> &arr){
  int start=s, end=e;
  while(start<end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
  return arr;
}

std::vector<int> ArrayRotation::rotateArr(int k, std::vector<int> &arr){
  reverse(0, k-1, arr);
  reverse(k, arr.size()-1, arr);
  reverse(0, arr.size()-1, arr);
  return arr;
}

int main(){
  ArrayRotation *r = new ArrayRotation();
  std::vector<int> arr{1, 2, 3, 4};
  std::cout << "After rotating array [1, 2, 3, 4] 2 times : " << std::endl;
  for(auto x: r->rotateArr(2, arr)){
    std::cout << x << " ";
  }
  return 0;
}