/*
  Given an array, arr[] of size N, the task is to find the count of 
  array indices such that removing an element from these indices makes 
  the sum of even-indexed and odd-indexed array elements equal.

Example Input
Input 1:
A = [2, 1, 6, 4]
Input 2:
A = [1, 1, 1]


Example Output
Output 1:
1
Output 2:
3
*/
#include <vector>
#include <iostream>

class SpecialIndex{
  public : 
  SpecialIndex(){}
  int solve(std::vector<int> &arr);
  ~SpecialIndex(){}
};

int SpecialIndex::solve(std::vector<int> &arr){
  int count = 0;

  if(arr.size() == 0){
    return count;
  }else if(arr.size() == 1){
    return ++count;
  }

  std::vector<int> pfe(arr.size());
  std::vector<int> pfo(arr.size());

  pfe[0] = arr[0];
  pfo[0] = 0;

  for(int i=1; i<arr.size(); i++){
    if(i%2 == 0){
      pfe[i] = arr[i] + pfe[i-1];
      pfo[i] = pfo[i-1];
    }else{
      pfe[i] = pfe[i-1];
      pfo[i] = pfo[i-1] + arr[i]; 
    }
  }

  if(pfo[arr.size()-1] == pfe[arr.size()-1]-pfe[0]){
    count++;
  }

  for(int i=1; i<arr.size(); i++){
    /* sum of even index after removing i
     = sum of even index elements [0, i-1] + sum of odd index ele [i+1, size]
    */ 
    int a = pfe[i-1] + pfo[arr.size()-1] - pfo[i];
    /* sum of odd index after removing i
     = sum of odd index elements [0, i-1] + sum of even index ele [i+1, size]
    */ 
    int b = pfo[i-1] + pfe[arr.size()-1] - pfe[i];
    if(a == b){
      count++;
    } 
  }

  return count;
}

int main(){
  std::cout << "After executing : " << std::endl;
  std::vector<int> arr{1, 1, 1};
  SpecialIndex *s = new SpecialIndex();
  std::cout << s->solve(arr) << std::endl;
  return 0;
}