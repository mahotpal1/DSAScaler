/*
You are given an array A of length N and Q queries given by the 2D array B of size Q*2. Each query consists of two integers B[i][0] and B[i][1].
For every query, the task is to calculate the sum of all odd indices in the range A[B[i][0]…B[i][1]].

Note : Use 0-based indexing

Example Input
Input 1:
A = [1, 2, 3, 4, 5]
B = [   [0,2] 
        [1,4]   ]
Input 2:
A = [2, 1, 8, 3, 9]
B = [   [0,3] 
        [2,4]   ]


Example Output
Output 1:
[2, 6]
Output 2:
[4, 3]
*/

#include <vector>
#include <iostream>

class EvenIndex{
  public :
    EvenIndex(){}
    std::vector<int> solve(std::vector<int> &arr, std::vector<std::vector<int>> &B);
    ~EvenIndex(){}
};

std::vector<int> EvenIndex::solve(std::vector<int> &arr, std::vector<std::vector<int>> &B){
  std::vector<int> pf(arr.size());

  pf[0] = 0;
  for(int i=1; i<arr.size(); i++){
    if(i%2 == 0){
      pf[i] = pf[i-1];
    }else{
      pf[i] = pf[i-1] + arr[i];      
    }
  }

  std::vector<int> ans(B.size());

  for(int i=0; i<B.size(); i++){
    if(B[i][0] == 0){
      ans[i] = pf[B[i][1]];
    }else{
      ans[i] = pf[B[i][1]]-pf[B[i][0] - 1];
    }
  }
  return ans;
}

int main(){
  std::vector<int> arr{1, 2, 3, 4, 5};
  std::vector<std::vector<int>> B{
    {0,2}, 
    {1,4}
  };

  EvenIndex *p = new EvenIndex();

  std::cout << "Elments after performing Operation : " << std::endl;
  for(auto x : p->solve(arr, B)){
    std::cout << x << " ";
  }

  return 0;
}