/*
Given an array A. You have some integers given in the array B.
For the i-th number, find the frequency of B[i] in the array A and return a list containing all the frequencies.

Example Input
Input 1:
A = [1, 2, 1, 1]
B = [1, 2]
Input 2:
A = [2, 5, 9, 2, 8]
B = [3, 2]

Example Output
Output 1:
[3, 1]
Output 2:
[0, 2]
*/

#include <iostream>
#include <vector>
#include <unordered_map>

class FrequencyElementQuerry{
public : 
    FrequencyElementQuerry(){}
    ~FrequencyElementQuerry(){}
    std::vector<int> solve(std::vector<int> &A, std::vector<int> &B);  
};

std::vector<int> FrequencyElementQuerry::solve(std::vector<int> &A, std::vector<int> &B){
    std::vector<int> ans;
    std::unordered_map<int, int> mp;
    for(int i=0; i<A.size(); i++){
        if(mp.find(A[i]) != mp.end()){
            mp[A[i]] += 1;
        }else{
            mp[A[i]] = 1;
        }
    }

    for(int i=0; i<B.size(); i++){
        int x = mp[B[i]];
        ans.push_back(x);
    }
    return ans;
}

int main(){
    std::vector<int> A{2, 5, 9, 2, 8};
    std::vector<int> B{3,2,8};

    FrequencyElementQuerry *f = new FrequencyElementQuerry();
    
    std::cout << "Total count of elements mentioned in the querries are : " << std::endl;
    for(auto x: f->solve(A, B)){
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}
