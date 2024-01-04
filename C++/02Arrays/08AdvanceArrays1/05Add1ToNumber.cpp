/*
Given a non-negative number represented as an array of digits, add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.

NOTE: Certain things are intentionally left unclear in this question which you should practice asking the interviewer. For example: for this problem, the following are some good questions to ask :

Q: Can the input have 0's before the most significant digit. Or, in other words, is 0 1 2 3 a valid input?
A: For the purpose of this question, YES
Q: Can the output have 0's before the most significant digit? Or, in other words, is 0 1 2 4 a valid output?
A: For the purpose of this question, NO. Even if the input has zeroes before the most significant digit.


Example Input
Input 1:
[1, 2, 3]

Example Output
Output 1:
[1, 2, 4]

*/

#include <iostream>
#include <vector>

using namespace std;

class Add1ToNumber{
  public :
    Add1ToNumber(){}
    ~Add1ToNumber(){}
    std::vector<int> solve(std::vector<int> arr);
};

std::vector<int> Add1ToNumber::solve(std::vector<int> A){
  vector<int> arr(A.size()+1, 0);
    for(int i=A.size()-1; i>=0; i--){
        A[i] = A[i]+1;
        if(A[i]==10){
            if(i != 0){
                A[i] = 0;
                continue;
            }else{
                vector<int> arr(A.size()+1, 0);
                arr[0] = 1;
                return arr;
            }
        }else{
            break;
        }   
    }
    vector<int> new_arr;
    bool flag=true;
    for(auto x: A){
        if(x==0 && flag){
            continue;
        }else{
            flag=false;
            new_arr.push_back(x);
        }
    }
    return new_arr;
}

int main(){
  std::vector<int> arr{1, 2, 3};
  Add1ToNumber *a = new Add1ToNumber();
  cout << "After adding 1 the arrays is : " << endl;
  for(auto x : a->solve(arr)){
    std::cout << x << " ";
  }
  return 0;
}