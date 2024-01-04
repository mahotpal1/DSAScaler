/*
There are A beggars sitting in a row outside a temple. 
Each beggar initially has an empty pot. 
When the devotees come to the temple, they donate some amount
of coins to these beggars. Each devotee gives a fixed amount 
of coin(according to their faith and ability) to some K 
beggars sitting next to each other.

Given the amount P donated by each devotee to the beggars 
ranging from L to R index, where 1 <= L <= R <= A, 
find out the final amount of money in each beggar's pot at 
the end of the day, provided they don't fill their pots 
by any other means.
For ith devotee B[i][0] = L, B[i][1] = R, B[i][2] = P, 
given by the 2D array B


Example Input
Input 1:-
A = 5
B = [[1, 2, 10], [2, 3, 20], [2, 5, 25]]


Example Output
Output 1:-
10 55 45 25 25
*/

#include <iostream>
#include <vector>

class ContinuousSumQuerry{
  public : 
    ContinuousSumQuerry(){}
    ~ContinuousSumQuerry(){}
    std::vector<int> solve(int A, std::vector<std::vector<int>> &arr);
};

std::vector<int> ContinuousSumQuerry::solve(int A, std::vector<std::vector<int>> &arr){
  std::vector<int> ans(A, 0);

  for(int i=0; i<arr.size(); i++){
    int left = arr[i][0];
    int right = arr[i][1];
    int val = arr[i][2];

    ans[left-1] += val;
    if(right < A){
      ans[right] -= val;
    }
  }

  for(int i=0; i<ans.size(); i++){
    if(i == 0){
      continue;
    }else{
      ans[i] += ans[i-1];
    }
  }
  return ans;
}

int main(){
  std::vector<std::vector<int>> arr{{1, 2, 10}, {2, 3, 20}, {2, 5, 25}};
  ContinuousSumQuerry *c = new ContinuousSumQuerry();
  std::cout << "After distributing the stuff final recievings : " << std::endl;
  for(auto x : c->solve(5, arr)){
    std::cout << x << " ";
  }

  return 0;
}