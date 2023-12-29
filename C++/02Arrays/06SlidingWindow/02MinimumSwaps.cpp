/*
Given an array of integers A and an integer B, find and return
the minimum number of swaps required to bring all the numbers
less than or equal to B together.

Note: It is possible to swap any two elements, not necessarily
consecutive.

Example Input
Input 1:
 A = [1, 12, 10, 3, 14, 10, 5]
 B = 8
Input 2:
 A = [5, 17, 100, 11]
 B = 20

Example Output
Output 1:
 2
Output 2:
 1
*/
#include <iostream>
#include <vector>

class MinimumSwaps{
  public :
    MinimumSwaps(){}
    ~MinimumSwaps(){}
    int solve(std::vector<int> &arr, int B);
};

int MinimumSwaps::solve(std::vector<int> &arr, int B){
  int poss=0;
  for(auto x: arr){
    if(x <= B){
      poss++;
    }
  }
  if(poss==1 || poss==0){
    return 0; 
  }
  int bad=0;
  for(int i=0; i<poss; i++){
    if(arr[i]>B){
      bad++;
    }
  }
  int ans=bad, s=0, e=poss;
  while(e<arr.size()){
    if(arr[s]>B){
      bad--;
    }
    if(arr[e]>B){
      bad++;
    }
    if(bad < ans){
      ans = bad;
    }
    s++; e++;
  }
  return ans;
}

int main(){
  MinimumSwaps *m = new MinimumSwaps();
  std::vector<int> arr{1, 12, 10, 3, 14, 10, 5};
  std::cout << "Minimum number of Swaps required for size 8 : " 
            << m->solve(arr, 8) <<std::endl;
  return 0;
}