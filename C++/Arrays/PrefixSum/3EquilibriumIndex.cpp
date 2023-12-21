/*
You are given an array A of integers of size N.
Your task is to find the equilibrium index of the given array
The equilibrium index of an array is an index such that the sum
 of elements at lower indexes is equal to the sum of elements at 
 higher indexes.
If there are no elements that are at lower indexes or at higher 
indexes, then the corresponding sum of elements is considered as 0.
*/

#include <iostream>
#include <vector>

class EquillibriumIndex{
public :
    EquillibriumIndex(){
    }
    ~EquillibriumIndex(){}
    int solve(std::vector<int> &arr);
};

int EquillibriumIndex::solve(std::vector<int> &arr){
    std::vector<int> pf(arr.size());
    pf[0] = arr[0];
    for(int i =1; i<arr.size(); i++){
        pf[i] = arr[i] + pf[i-1];
    }
    //if(pf[i]-A[i] == pf[A.size()-1]-pf[i])
    for(int i=0; i<arr.size(); i++){
        if(pf[i-1] == pf[arr.size()-1]-pf[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    EquillibriumIndex *r = new EquillibriumIndex();
    std::vector<int> arr{1, 2, 3};
    std::cout << "Equillibrium index in array : {1, 2, 3} : " << r->solve(arr) << std::endl;
    return 0;
}