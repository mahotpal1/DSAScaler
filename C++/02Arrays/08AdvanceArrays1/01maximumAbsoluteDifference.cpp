/*
Find the maximum sum of contiguous 
non-empty subarray within an array A of length N.
*/

#include <iostream>
#include <vector>

class KadanesAlgorithm{
  public : 
    KadanesAlgorithm(){}
    ~KadanesAlgorithm(){}
    int solveusingBruteForce(std::vector<int> &arr);
    int solveusingKadane(std::vector<int> &arr);
};

int KadanesAlgorithm::solveusingBruteForce(std::vector<int> &arr){
  int ans = 0;
  for(int i=0; i<arr.size(); i++){
    int sum = 0;
    for(int j=i; j<arr.size(); j++){
      sum += arr[j];
      if(ans < sum){
        ans = sum;
      }
    }
  }
  return ans;
}

int KadanesAlgorithm::solveusingKadane(std::vector<int> &arr){
  int ans=arr[0], sum=0;
  for(int i=0; i<arr.size(); i++){
    sum += arr[i];
    ans = std::max(ans, sum);
    if(sum < 0){
      sum = 0;
    }
  }
  return ans;
}

int main(){
  std::vector<int> arr{-2, 1, -3, 4, -1, 2, 1, -5, 4};
  KadanesAlgorithm *k = new KadanesAlgorithm();
  std::cout << "The maxm sum using kadane's algo : " << k->solveusingKadane(arr) << std::endl;
  std::cout << "The maxm sum using brute force : " << k->solveusingBruteForce(arr) << std::endl;
  return 0;
}