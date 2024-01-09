/*
Given an array of integers A, find and return whether the given array contains a non-empty subarray with a sum
equal to 0.
If the given array contains a sub-array with sum zero return 1, else return 0.

Example Input
Input 1:
 A = [1, 2, 3, 4, 5]
Input 2:
 A = [4, -1, 1]

Example Output
Output 1:
 0
Output 2:
1
*/
#include <iostream>
#include <vector>
#include <unordered_set>

class SubArraySumZero{
    public : 
    SubArraySumZero(){}
    ~SubArraySumZero(){}
    int solve(std::vector<int> &arr);
};

int SubArraySumZero::solve(std::vector<int> &arr){
    //int ans=-1;
    std::vector<int> pf;
    for(int i=0; i<arr.size(); i++){
        if(i == 0){
            pf.push_back(arr[i]);
        }else{
            pf.push_back(arr[i] + pf[i-1]);
        }
        if(pf[i] == 0){
            return 1;
        }
    }
    std::unordered_set<int> hs;
    for(int i=0; i<pf.size(); i++){
        hs.insert(pf[i]);
    }
    if(hs.size() != pf.size()){
        return 1;
    }
    return -1;
}

int main(){
    SubArraySumZero *s = new SubArraySumZero();

    std::vector<int> arr1{1, 2, 3, 4, 5};
    std::vector<int> arr2{4, -1, 1};

    std::cout << "Is there in array1 : " << s->solve(arr1) << std::endl;
    std::cout << "Is there in array2 : " << s->solve(arr2) << std::endl;

    return 0;
}