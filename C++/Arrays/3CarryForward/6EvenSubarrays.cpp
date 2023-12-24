/*
You are given an integer array A.

Decide whether it is possible to divide the array into one or more subarrays of
even length such that the first and last element of all subarrays will be even.

Return "YES" if it is possible; otherwise, return "NO" (without quotes).

Example Input
Input 1:

 A = [2, 4, 8, 6]
Input 2:

 A = [2, 4, 8, 7, 6]


Example Output
Output 1:

 "YES"
Output 2:

 "NO"
*/
#include <iostream>
#include <vector>
#include <string>

class EvenSubarrays{
  public : 
    EvenSubarrays(){}
    ~EvenSubarrays(){}
    std::string solve(std::vector<int> &arr);
};

std::string EvenSubarrays::solve(std::vector<int> &arr){
  if(arr.size()%2==0 || arr[0]%2==0 || arr[arr.size()-1]==0){
    return "NO";
  }
  return "YES";
}

int main(){
  EvenSubarrays *e = new EvenSubarrays();
  std::vector<int> arr{2, 4, 8, 7, 6};
  std::cout << "Is it possible ? " << e->solve(arr) << std::endl;
  return 0;
}
