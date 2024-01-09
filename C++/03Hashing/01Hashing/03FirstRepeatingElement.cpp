/*
Given an integer array A of size N, find the first repeating element in it.
We need to find the element that occurs more than once and whose index of the first occurrence is the smallest.
If there is no repeating element, return -1.

Example Input
Input 1:
A = [10, 5, 3, 4, 3, 5, 6]
Input 2:
A = [6, 10, 5, 4, 9, 120]


Example Output
Output 1:
5
Output 2:
-1

*/

#include <iostream>
#include <vector>
#include <unordered_map>

class FirstRepeatingElement{
public:
    FirstRepeatingElement(){}
    ~FirstRepeatingElement(){}
    int solve(std::vector<int> &arr);
};

int FirstRepeatingElement::solve(std::vector<int> &arr){
    std::unordered_map<int, int> hm;
    for(int i=0; i<arr.size(); i++){
        if(hm.find(arr[i]) != hm.end()){
            hm[arr[i]] += 1;
        }else{
            hm[arr[i]] = 1;
        }
    }

    for(auto x: arr){
        if(hm[x] > 1){
            return x;
        }
    }
    return -1;
}

int main(){
    FirstRepeatingElement *f = new FirstRepeatingElement();
    std::cout << "The count of first repeating number in array1 : " << f->solve({10, 5, 3, 4, 3, 5, 6}) << std::endl;
    std::cout << "The count of first repeating number in array2 : " << f->solve({6, 10, 5, 4, 9, 120}) << std::endl;;
    return 0;
}