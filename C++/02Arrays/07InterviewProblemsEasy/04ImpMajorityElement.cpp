/*
Given an array of size N, find the majority element. The majority 
element is the element that appears more than floor(n/2) times.
You may assume that the array is non-empty and the majority element
always exists in the array.
*/
#include <vector>
#include <iostream>

class MajorityElement{
  public : 
    MajorityElement(){}
    ~MajorityElement(){}
    int solve(std::vector<int> &arr);
};

int MajorityElement::solve(std::vector<int> &arr){
  int maj=arr[0], count=1;
  for(int i=1; i<arr.size(); i++){
    if(count == 0){
      maj = arr[i];
    }
    if(arr[i] == maj && count>0){
      count++;
    }else if(count > 0){
      count--;
    }
  }
  return maj;
}

int main(){
  std::vector<int> arr{2, 1, 2};
  MajorityElement *m = new MajorityElement();
  std::cout << "After performing opertion : " << m->solve(arr) << std::endl; 
  return 0;
}