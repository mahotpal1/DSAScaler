/*
You are given an array A of N integers.
Return a 2D array consisting of all the subarrays of the array

Note : The order of the subarrays in the resulting 2D array does not matter.

Example Input
Input 1:
A = [1, 2, 3]
Input 2:
A = [5, 2, 1, 4]


Example Output
Output 1:
[[1], [1, 2], [1, 2, 3], [2], [2, 3], [3]]
Output 2:
[[1 ], [1 4 ], [2 ], [2 1 ], [2 1 4 ], [4 ], [5 ], [5 2 ], [5 2 1 ], [5 2 1 4 ] ]

*/
#include <iostream>
#include <vector>

class GenerateAllSubarrays{
  public : 
    GenerateAllSubarrays(){}
    ~GenerateAllSubarrays(){}
    std::vector<std::vector<int>> solve(std::vector<int> &arr);
};

std::vector<std::vector<int>> GenerateAllSubarrays::solve(std::vector<int> &arr){
  std::vector<std::vector<int>> ans;

  for(int i=0; i<arr.size(); i++){
    for(int j=i; j<arr.size(); j++){
      std::vector<int> tmp;
      for(int k=i; k<=j; k++){
        tmp.push_back(arr[k]);
      }
      ans.push_back(tmp);
      tmp.clear();
    }
  }

  return ans;
}

int main(){
  std::vector<int> arr{5, 2, 1, 4};
  std::cout << "All the subarrays for the array : {5, 2, 1, 4} " << std::endl;
  GenerateAllSubarrays *g = new GenerateAllSubarrays();
  for(auto x: g->solve(arr)){
    std::cout << "[ ";
    for(auto y: x){
      std::cout << y << " ";
    }
    std::cout << "]";
    std::cout << std::endl;
  }
  return 0;
}