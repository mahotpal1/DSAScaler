/*
Say you have an array, A, for which the ith element is the price of a given stock on day i.
If you were only permitted to complete at most one transaction 
(ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.
Return the maximum possible profit.

Problem Constraints
0 <= A.size() <= 700000
1 <= A[i] <= 107

Example Input
Input 1:
A = [1, 2]
Input 2:

A = [1, 4, 5, 2, 4]


Example Output
Output 1:
1
Output 2:
4
*/

#include <iostream>
#include <vector>

class BuyAndSell{
public: 
  BuyAndSell(){}
  ~BuyAndSell(){}
  int solve(std::vector<int> &arr);
};

int BuyAndSell::solve(std::vector<int> &arr){
  int maxi=0, mini=0, sum=0;
  for(int i=0; i<arr.size(); i++){
    if(arr[i]>arr[maxi]){
      maxi = i;
    }
    // if current stock price gets less so we can only sell the stock after today 
    // so need to change maxi = i;
    if(arr[i]<arr[mini]){
      mini=i;
      maxi=i;
    }
    if(sum < arr[maxi]-arr[mini]){
      sum = arr[maxi] - arr[mini];
    }
  }
  return sum;
}

int main(){
  BuyAndSell *b = new BuyAndSell();
  std::vector<int> arr{1, 4, 5, 2, 4};
  std::cout << "The maximim profit that can be earned in transitions {1, 4, 5, 2, 4} is : " << b->solve(arr) << std::endl;
  return 0;
}