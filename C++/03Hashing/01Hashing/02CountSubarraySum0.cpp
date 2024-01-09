/*
Given an array of integers A, find and return whether the given array contains a non-empty subarray with a 
sum equal to 0.

If the given array contains a sub-array with sum zero return 1, else return 0.

Soln : 
There exists a subarray with sum 0, if pf of array contains atleast 1-repeating sum.
Or pf contains 0

Example Input
Input 1:
A = [1, -1, -2, 2]
Input 2:
A = [-1, 2, -1]

Example Output
Output 1:
3
Output 2:
1
*/

#include <iostream>
#include <unordered_map>
#include <vector>

class SubarrayWithSumZero{
public : 
    SubarrayWithSumZero(){}
    ~SubarrayWithSumZero(){}
    int solve(std::vector<int> &arr);
};

int SubarrayWithSumZero::solve(std::vector<int> &arr){
    //bool flag = false;
    int count = 0;
    std::vector<int> pf;
    //pf.push_back(arr[0]);
    for(int i=0; i<arr.size(); i++){
        if(i == 0){
            pf.push_back(arr[i]);
        }else{
            pf.push_back(arr[i] + pf[i-1]);
        }
        if(pf[i] == 0){
            count++;;
        }
    }

    std::unordered_map<int, int> mp;

    for(auto i=0; i<arr.size(); i++){
        if(mp.find(pf[i]) != mp.end()){
            mp[pf[i]] += 1;
            count++;
        }else{
            mp[pf[i]] = 1;
        }
    }

    return count;
}

int main(){
    SubarrayWithSumZero *s = new SubarrayWithSumZero();
    std::vector<int> arr1{1, -1, -2, 2};
    std::vector<int> arr2{-1, 2, -1};
    
    std::cout << "For Array 1 : " << s->solve(arr1) << std::endl;
    std::cout << "For Array 2 : " << s->solve(arr2) <<std::endl;

    return 0;
}