/*
You are given an array A of length N and Q queries given by the 2D 
array B of size Q×2.
Each query consists of two integers B[i][0] and B[i][1].
For every query, your task is to find the count of even numbers in 
the range from A[B[i][0]] to A[B[i][1]].
*/

#include <iostream>
#include <vector>

class EvenNumbersInRange{
public :
    EvenNumbersInRange(){}
    ~EvenNumbersInRange(){}
    int solve(std::vector<int> &arr, std::vector<std::vector<int>> &B);
};

std::vector<int> EvenNumbersInRange::solve(std::vector<int> &arr, 
                                std::vector<std::vector<int>> &B){
    std::vector<int> ans(B.size());
    std::vector<int> pfEvenCount{arr.size()-1};
    if(arr[0]%2 == 0){
        pfEvenCount[0] = 1;
    }
    int count = 1;
    for(int i=1; i<arr.size(); i++){
        if(arr[i]%2 == 0){
            count ++;
            pfEvenCount[i] = count;
        }
    }

    for(int i=0; B.size(); i++){
        ans[i] = pf[B]
    }

    return ans;
}

int main(){
    EvenNumbersInRange *e = new EvenNumbersInRange();

}