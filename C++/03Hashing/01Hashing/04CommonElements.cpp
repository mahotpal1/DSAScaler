/*
Given two integer arrays, A and B of size N and M, respectively. Your task is to find all the common elements
in both the array.

NOTE:
Each element in the result should appear as many times as it appears in both arrays.
The result can be in any order.

Example Input
Input 1:
 A = [1, 2, 2, 1]
 B = [2, 3, 1, 2]
Input 2:
 A = [2, 1, 4, 10]
 B = [3, 6, 2, 10, 10]


Example Output
Output 1:
 [1, 2, 2]
Output 2:
 [2, 10]

*/

#include <iostream>
#include <vector>
#include <unordered_map>

class CommonElements{
public : 
    CommonElements(){}
    ~CommonElements(){}
    std::vector<int> solve(std::vector<int> &arr1, std::vector<int> &arr2);
};

std::vector<int> CommonElements::solve(std::vector<int> &arr1, std::vector<int> &arr2){
    std::vector<int> ans;
    std::unordered_map<int, int> mp;
    for(int i=0; i<arr1.size(); i++){
        if(mp.find(arr1[i]) != mp.end()){
            mp[arr1[i]] += 1;
        }else{
            mp[arr1[i]] = 1;
        }
    }
    for(int i=0; i<arr2.size(); i++){
        if(mp.find(arr2[i]) != mp.end()){
            if(mp[arr2[i]]>0){
                ans.push_back(mp[arr2[i]]);
                mp[arr2[i]] -= 1;
            }
        }
    }
    return ans;
}

int main(){
    CommonElements *c = new CommonElements();
    std::cout << "For the above two arrays common repeated elements are : " << std::endl;
    std::vector<int> arr1{1, 2, 2, 1};
    std::vector<int> arr2{2, 3, 1, 2};
    for(auto x: c->solve(arr1, arr2)){
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}
