/*
You have given a string A having Uppercase English letters.
You have to find how many times subsequence "AG" is there in the 
given string.
NOTE: Return the answer modulo 109 + 7 as the answer can be very large.
*/
#include <string>
#include <iostream>

class SpecialSubsequence{
public:
    SpecialSubsequence(){};
    ~SpecialSubsequence(){};
    int solve(std::string &str);
};

int SpecialSubsequence::solve(std::string &str){
    int count = 0;
    int c=0;
    int a=0;
    for(int i=str.length()-1; i>=0; i--){
        if(str[i] == 'g'){
            c++;
        }else if(str[i] == 'a'){
            a++;
            count += c*a;
        }
    }
    return count;
}

int main(){
    SpecialSubsequence *s = new SpecialSubsequence();
    std::string str = "abcgag";
    std::cout << "The count of 'ag' pairs in the given string : " << s->solve(str) << std::endl;
    return 0;
}