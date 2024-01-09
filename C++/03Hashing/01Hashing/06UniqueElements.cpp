/*
Given an array A of N integers, return the number of unique elements in the array.
*/

#include <iostream>
#include <vector>
#include <unordered_set>

class UniqueElements{
    public : 
    UniqueElements(){}
    ~UniqueElements(){}
    int solve(std::vector<int> &arr);
};

int UniqueElements::solve(std::vector<int> &arr){
    std::unordered_set<int> hs;
    for(int i=0; i<arr.size(); i++){
        hs.insert(arr[i]);
    }
    return hs.size();
}

int main(){
    std::vector<int> arr1{3, 4, 3, 6, 6};
    std::vector<int> arr2{3, 3, 3, 9, 0, 1, 0};
    UniqueElements *u = new UniqueElements();
    std::cout << "For Array 1 : " << u->solve(arr1) << std::endl;
    std::cout << "For Array 2 : " << u->solve(arr2) << std::endl;
    return 0;
}