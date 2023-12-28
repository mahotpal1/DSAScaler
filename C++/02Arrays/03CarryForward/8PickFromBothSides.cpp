/*
You are given an integer array A of size N.

You have to perform B operations. In one operation, you can remove either the leftmost or the rightmost element of the array A.

Find and return the maximum possible sum of the B elements that were removed after the B operations.

NOTE: Suppose B = 3, and array A contains 10 elements, then you can:

Remove 3 elements from front and 0 elements from the back, OR
Remove 2 elements from front and 1 element from the back, OR
Remove 1 element from front and 2 elements from the back, OR
Remove 0 elements from front and 3 elements from the back.

Example Input
Input 1:

 A = [5, -2, 3 , 1, 2]
 B = 3
Input 2:

 A = [ 2, 3, -1, 4, 2, 1 ]
 B = 4

 
Example Output
Output 1:

 8
Output 2:

 9
*/
#include <iostream>
#include <vector>

class PickFromBothSideS{
  public : 
    PickFromBothSideS(){}
    ~PickFromBothSideS(){}
    int solve(std::vector<int> &arr, int B);
};

int PickFromBothSideS::solve(std::vector<int> &arr, int B){
  int sum = 0, i=0;
  for(i=0; i<B; i++){
    sum += arr[i];
  }
  int lastsum=sum, j=arr.size()-1;
  while(B){
    sum -= arr[--i];
    sum += arr[j--];
    if(sum>lastsum){
      lastsum = sum;
    }
    B--;
  }
  return lastsum;
}

int main(){
  PickFromBothSideS *p = new PickFromBothSideS();
  std::vector<int> arr{5, -2, 3 , 1, 2};
  std::cout << "Maximum Sum with {5, -2, 3 , 1, 2}: " << p->solve(arr, 3) << std::endl;

  return 0;
}