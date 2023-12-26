/*
Given an array A and an integer B. A pair(i, j) in the array is a good 
pair if i != j and (A[i] + A[j] == B). Check if any good pair exist or 
not.
*/
#include <iostream>
#include <vector>

class GoodPair{
public:
  GoodPair(){}
  ~GoodPair(){}
  int solve(std::vector<int> &A, int B);
};

int GoodPair::solve(std::vector<int> &A, int B){
  for(int i=0; i<A.size(); i++){
    for(int j=i+1; j<A.size(); j++){
      if(A[i]+A[j] == B){
        return 1;
      }
    }
  }
  return 0;
}

int main(){
  GoodPair *p = new GoodPair();
  std::vector<int> vctr{1, 2, 4};
  std::cout << "Is it having a good pair? " << p->solve(vctr, 7) << std::endl;
  return 0;
}