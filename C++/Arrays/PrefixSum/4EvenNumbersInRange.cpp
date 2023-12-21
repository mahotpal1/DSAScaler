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
    std::vector<int> solve(std::vector<int> &arr, std::vector<std::vector<int>> &B);
};

std::vector<int> EvenNumbersInRange::solve(std::vector<int> &arr, std::vector<std::vector<int>> &B){
    std::vector<int> ans(B.size());
    std::vector<int> pfEvenCount(arr.size());
    int count = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]%2 == 0){
            count ++;
        }
        pfEvenCount[i] = count;
    }
    for(int i=0; i<B.size(); i++){
        if(B[i][0] == 0){
            ans[i] = pfEvenCount[B[i][1]];
        }else{
            ans[i] = pfEvenCount[B[i][1]] - pfEvenCount[B[i][0]-1];
        }
    }
    return ans;
}

int main(){
    EvenNumbersInRange *e = new EvenNumbersInRange();
    std::vector<int> arr{1, 2, 3, 4, 5};
    std::vector<std::vector<int>> B{{0, 2},{2, 4},{1, 4}};
    std::cout << "For the given range of querries individual number of primes are : " << std::endl;
    for(auto x: e->solve(arr, B)){
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}